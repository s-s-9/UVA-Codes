#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, result, add, i;
    while(scanf("%lld", &n)==1){
        add = 6;
        result = 1;
        for(i = 3; i<=n; i+=2){
            result+=add;
            add+=4;
        }
        printf("%lld\n", result + result-2 + result-4);
    }
    return 0;
}
