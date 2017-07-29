#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k, loopfor;
    string result, s;
    char current;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        cin>>s;
        result = "";
        loopfor = 0;
        for(j = 0; j<s.size(); j++){
            if(s[j]>='A' && s[j]<='Z'){
                for(k = 0; k<loopfor; k++){
                    result.push_back(current);
                }
                current = s[j];
                loopfor = 0;
            }
            else{
                loopfor*=10;
                loopfor+=(s[j]-48);
            }
        }
        for(k = 0; k<loopfor; k++){
            result.push_back(current);
        }
        cout<<"Case "<<i<<": "<<result<<endl;
    }
    return 0;
}
