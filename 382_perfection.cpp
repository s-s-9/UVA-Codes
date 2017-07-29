#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, counter, iteration;
    iteration = 0;
    while(scanf("%d", &n)==1){
        if(iteration==0){
            printf("PERFECTION OUTPUT\n");
        }
        if(n==0){
            printf("END OF OUTPUT\n");
            break;
        }

        if(n==1){
            printf("    1  DEFICIENT\n");
            iteration++;
            continue;
        }
        counter = 0;
        for(i = 1; i<=sqrt(n); i++){
            if(n%i==0){
                counter+=i;
                counter+=(n/i);
            }
        }
        counter-=n;
        if(counter==n){
            printf("%5d  PERFECT\n", n);
        }
        else if(counter<n){
            printf("%5d  DEFICIENT\n", n);
        }
        else if(counter>n){
            printf("%5d  ABUNDANT\n", n);
        }
        iteration++;
    }
    return 0;
}
