#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, i, fib[100];
    fib[0] = 1;
    fib[1] = 1;
    for(i = 2; i<100; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    while(scanf("%lld", &n)==1){
        if(n==0){
            break;
        }
        printf("%lld\n", fib[n]);
    }
    return 0;
}
