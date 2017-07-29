#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k, a, b, addition, current, result, isprime, sieve[1000], precalc[1000000];

    for(i = 0; i<1000; i++){
        sieve[i] = 0;
    }
    sieve[0] = 1; sieve[1] = 1;
    for(i = 2; i<1000; i++){
        for(j = i+i; j<1000; j+=i){
            sieve[j] = 1;
        }
    }
    result = 0;
    for(j = 0; j<=999999; j++){
        current = j;
        addition = 0;
        while(current!=0){
            addition+=(current%10);
            current/=10;
        }
        if(sieve[addition]==0){
            current = j;
            isprime = 1;
            for(k = 2; k<=(sqrt(current)); k++){
                if(current%k==0 && current>k){
                    isprime = 0;
                    break;
                }
            }
            if(isprime==1){
                result++;
            }
        }
        precalc[j] = result;
    }
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d %d", &a, &b);
        if(a>b){
            swap(a, b);
        }
        //if(a==999999){
          //  a = 999998;
        //}
        //if(b==999999){
          //  b = 999998;
        //}
        //if(a==b){
          //  printf("%d\n", precalc[b] - precalc[b-1]);
        //}
        //else{
            printf("%d\n", precalc[b] - precalc[a-1]);
        //}
    }
    return 0;
}
