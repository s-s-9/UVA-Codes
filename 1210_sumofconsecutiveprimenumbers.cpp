#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sieve[10001], total, counter, i, j, n;
    vector<int> prime;
    for(i = 0; i<=10000; i++){
        sieve[i] = 0;
    }
    for(i = 2; i<=10000; i++){
        if(sieve[i]==0){
            for(j = i+i; j<=10000; j+=i){
                sieve[j] = 1;
            }
        }
    }
    for(i = 2; i<=10000; i++){
        if(sieve[i]==0){
            prime.push_back(i);
        }
    }
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        counter = 0;
        for(i = 0; i<prime.size(); i++){
            if(prime[i]>n){
                break;
            }
            total = 0;
            for(j = i; j<prime.size(); j++){
                total+=prime[j];
                if(total==n){
                    counter++;
                    break;
                }
                if(total>n){
                    break;
                }
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}
