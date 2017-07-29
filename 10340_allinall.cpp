#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    int counter, i, j, flag, result;
    while(cin>>s1>>s2){
        result = 0;
        if(s1.size()>s2.size()){
            result = 0;
        }
        else{
            j = 0;
            counter = 0;
            for(i = 0; i<s1.size(); i++){
                if(j>=s2.size()){
                    break;
                }
                while(s1[i]!=s2[j]){
                    j++;
                    if(j>=s2.size()){
                        break;
                    }
                }
                if(j>=s2.size()){
                    break;
                }
                if(s1[i]==s2[j]){
                    counter++;
                }
                j++;
            }
        }
        if(counter == s1.size()){
            result = 1;
        }
        if(result == 0){
            cout<<"No"<<endl;
        }
        else if(result == 1){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
