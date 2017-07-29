#include<bits/stdc++.h>

using namespace std;

int main()
{
    int init, i, counter, n, arr[30];
    init = 1;
    arr[0] = 0;
    arr[1] = 0;
    counter = 0;
    for(i = 2; i<=20; i++){
        arr[i] = init;
        init*=2;
    }
    while(scanf("%d", &n)==1){
        if(n<0){
            break;
        }
        counter++;
        if(n==1 || n==0){
            printf("Case %d: 0\n", counter);
            continue;
        }
        else if(n==2){
            printf("Case %d: 1\n", counter);
            continue;
        }
        for(i = 2; i<=20; i++){
            if(n<=arr[i]){
                printf("Case %d: %d\n", counter, i-2);
                break;
            }
        }
    }
    return 0;
}
