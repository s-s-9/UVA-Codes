#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string result = "";
    while(cin>>s){
        if(s=="E-N-D"){
            break;
        }
        string temp = "";
        for(int i = 0; i<s.size(); i++){
            if(isalpha(s[i]) || s[i]=='-'){
                temp.push_back(s[i]);
            }
            else{
                if(temp.size()>result.size()){
                    result = temp;
                }
                temp.clear();
            }
        }
        if(temp.size()>result.size()){
            result = temp;
        }
    }
    for(int i = 0; i<result.size(); i++){
        if(result[i]>='A' && result[i]<='Z'){
            result[i]+=32;
        }
    }
    cout<<result<<endl;
    return 0;
}
