#include <bits/stdc++.h>
using namespace std ;

string removespace(string s){
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            s.erase(s.begin() + i);
            i--;
        }
    }

    return s;
}

void addTemplate(string from, string to){
    string txt, dir = "Templates/";
    ifstream Template(dir + from),  curr(to); 
    ofstream tmp("tmp.txt"); 
   // cout << dir + from << "\n";


    while(getline(curr, txt)){
        tmp << txt << "\n";
        if (removespace(txt) == "usingnamespacestd;"){
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