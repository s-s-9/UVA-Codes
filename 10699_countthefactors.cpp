#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sieve[1000001], n, counter, i, j;
    map<int, int> m;
    for(i = 0; i<=1000000; i++){
        sieve[i] = 0;
    }
    sieve[1] = 1;
    for(i = 2; i<=1000000; i++){
        if(sieve[i]==0){
            for(j = i+i; j<=1000000; j+=i){
                sieve[j] = 1;
            }
        }
    }
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        m.clear();
        counter = 0;
        if(sieve[n]==0){
            m[n] = 1;
            counter++;
        }
        for(i = 2; i<=sqrt(n)+1; i++){
            if(((n%i)==0) && (sieve[i]==0)){
                //printf("%d\n", i);
                if(m[i]==0){
                    m[i] = 1;
                    counter++;
                }
                if(sieve[(n/i)]==0){
                    if(m[(n/i)]==0){
                        m[(n/i)] = 1;
                        counter++;
                    }
                }
            }
            else if(((n%i)==0) && (sieve[i]==1)){
                if(sieve[(n/i)]==0){
                    if(m[(n/i)]==0){
                        m[(n/i)] = 1;
                        counter++;
                    }
                }
            }
        }
        printf("%d : %d\n", n, counter);
    }
    return 0;
}
