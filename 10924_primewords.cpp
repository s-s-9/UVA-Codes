#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i, j, result, sieve[10000];
    for(i = 0; i<10000; i++){
        sieve[i] = 0;
    }
    sieve[0] = 1;
    for(i = 2; i<10000; i++){
        for(j = i+i; j<10000; j+=i){
            sieve[j] = 1;
        }
    }
    while(cin>>s){
        result = 0;
        for(i = 0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                result+=(s[i] - 38);
            }
            else if(s[i]>='a' && s[i]<='z'){
                result+=(s[i] - 96);
            }
        }
        if(sieve[result]==0){
            cout<<"It is a prime word."<<endl;
        }
        else if(sieve[result]==1){
            cout<<"It is not a prime word."<<endl;
        }
    }
    return 0;
}
