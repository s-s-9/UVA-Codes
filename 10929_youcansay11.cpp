#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, counter;
    string s;
    while(getline(cin, s)){
        if(s=="0"){
            break;
        }
        counter = 0;
        for(i = 0; i<s.size(); i++){
            if(i%2==0){
                counter+=(s[i]-48);
            }
            else{
                counter-=(s[i]-48);
            }
        }
        if(counter<0){
            counter*=-1;
        }
        if(counter%11==0){
            cout<<s<<" is a multiple of 11."<<endl;
        }
        else{
            cout<<s<<" is not a multiple of 11."<<endl;
        }
    }
    return 0;
}
