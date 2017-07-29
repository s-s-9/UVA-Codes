#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sieve[20000000], i, j, n;
    vector<int> primes, twinprimes;
    for(i = 0; i<20000000; i++){
        sieve[i] = 0;
    }
    sieve[0] = 1;   sieve[1] = 1;
    for(i = 0; i<20000000; i++){
        if(sieve[i]==0){
            for(j = i+i; j<20000000; j+=i){
                sieve[j] = 1;
            }
        }
    }
    for(i = 0; i<20000000; i++){
        if(sieve[i]==0){
            primes.push_back(i);
        }
    }
    for(i = 1; i<primes.size(); i++){
        if((primes[i]-primes[i-1])==2){
            twinprimes.push_back(primes[i]);
        }
    }
    while(scanf("%d", &n)==1){
        printf("(%d, %d)\n", twinprimes[n-1]-2, twinprimes[n-1]);
    }
    return 0;
}
