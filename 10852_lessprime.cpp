#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sieve[10001], i, j, n, num, x, p, pplus1, maximum, current, result;
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
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        maximum = -1;
        scanf("%d", &num);
        for(j = 1; j<=num; j++){
            if(sieve[j]==0){
                x = j;
                p = (num/j);
                pplus1 = ceil(double(num)/double(j));
                current = num-(p*x);
                if(current>=maximum){
                    maximum = current;
                    result = x;
                }
                //printf("%d %d %d %d\n", num, x, p, pplus1);
            }
        }
        printf("%d\n", result);
    }
    return 0;
}
