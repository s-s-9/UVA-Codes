#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j;
    string s, lastword, result, temp;
    while(getline(cin, s)){
        //cout<<s<<endl;
        result = "";
        lastword = "";
        for(i = 0; i<s.size(); i++){
            if(isalpha(s[i])){
                lastword.push_back(s[i]);
            }
            else{
                if(lastword.size()>=1){
                    if(lastword[0]=='A' || lastword[0]=='E' || lastword[0]=='I' || lastword[0]=='O' || lastword[0]=='U' ||
                       lastword[0]=='a' || lastword[0]=='e' || lastword[0]=='i' || lastword[0]=='o' || lastword[0]=='u'){
                        lastword+="ay";
                    }
                    else{
                        temp = "";
                        for(j = 1; j<lastword.size(); j++){
                            temp.push_back(lastword[j]);
                        }
                        temp.push_back(lastword[0]);
                        temp+="ay";
                        lastword = temp;
                    }
                    result+=lastword;
                }
                lastword = "";
                result.push_back(s[i]);
            }
        }
        if(lastword.size()>=1){
            if(lastword[0]=='A' || lastword[0]=='E' || lastword[0]=='I' || lastword[0]=='O' || lastword[0]=='U' ||
               lastword[0]=='a' || lastword[0]=='e' || lastword[0]=='i' || lastword[0]=='o' || lastword[0]=='u'){
                lastword+="ay";
            }
            else{
                temp = "";
                for(j = 1; j<lastword.size(); j++){
                    temp.push_back(lastword[j]);
                }
                temp.push_back(lastword[0]);
                temp+="ay";
                lastword = temp;
            }
            result+=lastword;
        }
        cout<<result<<endl;
    }
    return 0;
}
