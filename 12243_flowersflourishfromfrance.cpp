#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, current;
    int i, result;
    char check;
    vector<string> words;
    while(getline(cin, s)){
        if(s=="*"){
            break;
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        current = "";
        words.clear();
        for(i = 0; i<s.size(); i++){
            if(isalpha(s[i])){
                current.push_back(s[i]);
            }
            else{
                words.push_back(current);
                current = "";
            }
        }
        words.push_back(current);
        check = words[0][0];
        result = 1;
        for(i = 0; i<words.size(); i++){
            if(words[i]==""){
                continue;
            }
            if(words[i][0]!=check){
                result = 0;
            }
        }
        if(result==1){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
    return 0;
}
