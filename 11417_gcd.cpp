#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int smaller, bigger;
    if(a>b){
        bigger = a;
        smaller = b;
    }
    else{
        bigger = b;
        smaller = a;
    }
    int result;
    for(int k = 1; k<=smaller; k++){
        if((smaller%k==0) && (bigger%k==0)){
            result = k;
        }
    }
    return result;
}

int main()
{
    int n, g, i, j;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        g = 0;
        for(i = 1; i<n; i++){
            for(j = i+1; j<=n; j++){
                g+=gcd(i, j);
            }
        }
        printf("%d\n", g);
    }
    return 0;
}
