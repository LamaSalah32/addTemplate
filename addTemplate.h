#include <bits/stdc++.h>
using namespace std ;

string spaceRemover(string s){
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            s.erase(s.begin() + i);
            i--;
        }
    }

    return s;
}

// -------------------------------------

void exist(ifstream& f){
    if (not f.good()){
        throw invalid_argument("Nothing has been added to your code because the file does not exist!");
    }
}

//--------------------------------------
void isEmpty(ifstream& f){
    if (f.peek() == std::ifstream::traits_type::eof()){
        throw invalid_argument("Nothing has been added to your code because The file is empty!");
    }
}

//--------------------------------------

void checkContent(string from, string to, string dir, string out){
    ifstream file1(out + dir + from),  file2(out + to);

    string content1 = "", content2 = "", txt;
    while (getline(file1, txt)){
        for(auto& i : txt)
            if (i != ' ') content1 += i;
    }

    while (getline(file2, txt)){
        for(auto& i : txt)
            if (i != ' ') content2 += i;
    }

    if (content2.find(content1) != string::npos) {
        file1.close(), file2.close();
        throw invalid_argument("");
    }

    file1.close(), file2.close();
}

//--------------------------------------

void addTemp(string from, string to){
    string txt, dir = "Templates/", out = "";
    ifstream Template(out + dir + from),  curr(out + to);

    try{
        exist(Template);
        isEmpty(Template);
        checkContent(from, to, dir, out);
    } catch (invalid_argument& e){
        cerr << e.what();
        Template.close();
        curr.close();
        return;
    }

    ofstream tmp("tmp.txt");

    while(getline(curr, txt)){
        tmp << txt << "\n";
        if (spaceRemover(txt) == "usingnamespacestd;"){
            tmp << "\n";
            while(getline(Template, txt)){
                tmp << txt << "\n";
            }
        }
    }

    Template.close();
    curr.close();
    tmp.close();

    ifstream newFile("tmp.txt");
    ofstream afterInsertion(out + to);

    while(getline(newFile, txt)){
        afterInsertion << txt << "\n";
    }

    afterInsertion.close();
    newFile.close();
    remove("tmp.txt");
}
