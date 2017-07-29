#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, result, nyah, init, temp, temp2;
    string s;
    while(cin>>s){
        if(s=="0"){
            break;
        }
        nyah = 0;
        init = 0;
        for(i = 0; i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                init+=(s[i]-48);
            }
            else{
                cout<<s<<" is not a multiple of 9."<<endl;
                nyah = 1;
                break;
            }
        }
        if(nyah==1){
            continue;
        }
        if(init%9==0){
            result = 1;
            while(init!=9){
                temp = init;
                temp2 = 0;
                while(temp!=0){
                    temp2+=(temp%10);
                    temp/=10;
                }
                init = temp2;
                result++;
            }
            cout<<s<<" is a multiple of 9 and has 9-degree "<<result<<"."<<endl;
        }
        else{
            cout<<s<<" is not a multiple of 9."<<endl;
        }
    }
    return 0;
}
