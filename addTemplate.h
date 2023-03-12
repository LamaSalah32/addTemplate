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

void exist(std::ifstream& f){
    if (not f.good()){
        throw invalid_argument("Nothing has been added to your code because the file does not exist!");
    }
}

void isEmpty(std::ifstream& f){
    if (f.peek() == std::ifstream::traits_type::eof()){
        throw invalid_argument("Nothing has been added to your code because The file is empty!");
    }
}

void addTemp(string from, string to){
    string txt, dir = "Templates/";
    ifstream Template(dir + from),  curr(to);

    try{
        exist(Template);
        isEmpty(Template);

    } catch (invalid_argument& e){
        cerr << e.what() << endl;
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
    ofstream afterInsertion(to);

    while(getline(newFile, txt)){
        afterInsertion << txt << "\n";
    }

    afterInsertion.close();
    newFile.close();
    remove("tmp.txt");
}