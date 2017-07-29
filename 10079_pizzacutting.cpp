#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, result, n;
    while(scanf("%lld", &n)==1){
        if(n<0){
            break;
        }
        result = 1;
        for(i = 0; i<=n; i++){
            result+=i;
        }
        cout<<result<<endl;
    }
    return 0;
}
