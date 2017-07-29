#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string, string> m;
    int spacefound, i;
    string s, firstword, secondword;
    while(getline(cin, s)){
        if(s==""){
            break;
        }
        spacefound = 0;
        firstword = "";
        secondword = "";
        for(i = 0; i<s.size(); i++){
            if(s[i]==' '){
                spacefound = 1;
            }
            else{
                if(spacefound==0){
                    firstword.push_back(s[i]);
                }
                else{
                    secondword.push_back(s[i]);
                }
            }
            m[secondword] = firstword;
        }
    }
    while(cin>>s){
        if(m[s]==""){
            cout<<"eh"<<endl;
        }
        else{
            cout<<m[s]<<endl;
        }
    }
    return 0;
}
