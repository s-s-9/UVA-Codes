#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, ulta, temp;
    int sieve[1000000];
    for(i = 0; i<1000000; i++){
        sieve[i] = 0;
    }
    for(i = 2; i<1000000; i++){
        if(sieve[i]==0){
            for(j = i+i; j<1000000; j+=i){
                sieve[j] = 1;
            }
        }
    }
    while(scanf("%d", &n)==1){
        if(sieve[n]==1){
            printf("%d is not prime.\n", n);
        }
        else{
            ulta = 0;
            temp = n;
            while(temp>0){
                ulta*=10;
                ulta+=temp%10;
                temp/=10;
            }
            if((sieve[ulta]==1) || (n==ulta)){
                printf("%d is prime.\n", n);
            }
            else{
                printf("%d is emirp.\n", n);
            }
        }
    }
    return 0;
}
