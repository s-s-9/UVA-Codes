#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int arr[100000], n, i, result, c, r, p1, p2;
    for(i = 0; i<100000; i++){
        arr[i] = i*i;
    }
    while(scanf("%lld", &n)==1){
        if(n==0){
            break;
        }
        for(i = 0; i<100000;i++){
            if(arr[i]>=n){
                result = i;
                break;
            }
        }
        if((result*result)==n){
            if(result%2==0){
                printf("%lld 1\n", result);
            }
            else{
                printf("1 %lld\n", result);
            }
        }
        else{
            //printf("result: %d\n", result);
            p1 = (result*result)-n;
            p2 = n-((result-1)*(result-1));
            //printf("%lld %lld\n", p1, p2);
            if(result%2==0){
                if(p1>p2){
                    r = result;
                    c = p2;
                }
                else{
                    r = p1+1;
                    c = result;
                }
            }
            else{
                if(p1>p2){
                    r = p2;
                    c = result;
                }
                else{
                    r = result;
                    c = p1+1;
                }
            }
            printf("%lld %lld\n", c, r);
        }
    }
    return 0;
}
