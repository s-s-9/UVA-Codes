#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int init, result, i;
    string s;
    while(cin>>s){
        if(s=="0"){
            break;
        }
        result = 0;
        init = 1;
        for(i = s.size()-1; i>=0; i--){
            result+=(s[i]-48)*(pow(2, init)-1);
            init++;
        }
        cout<<result<<endl;
    }
    return 0;
}
