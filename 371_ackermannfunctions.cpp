#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int m, n, finalm, finaln, counter, current, winner, i, maximum;

    while(scanf("%lld %lld", &m, &n)==2){
        finalm = m;
        finaln = n;
        if(m==0 && n==0){
            break;
        }
        if(m>=n){
            swap(m, n);
            finalm = m;
            finaln = n;
        }
        maximum = 0;
        for(i = m; i<=n; i++){
            counter = 0;
            current = i;
            if(current==1){
                counter = 3;
            }
            while(current!=1){
                //printf("%lld\n", current);
                if(current%2==1){
                    current = (current*3) + 1;
                }
                else{
                    current/=2;
                }
                counter++;
            }
            if(counter>maximum){
                winner = i;
                maximum = counter;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", finalm, finaln, winner, maximum);
    }
    return 0;
}
