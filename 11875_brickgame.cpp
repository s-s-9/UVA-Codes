#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, n;
    scanf("%d", &t);
    for(i = 1; i<=t; i++){
        scanf("%d", &n);
        int age[20];
        for(j = 0; j<n; j++){
            scanf("%d", &age[j]);
        }
        if(n%2==0){
            printf("Case %d: %d\n", i, age[n/2]);
        }
        else{
            printf("Case %d: %d\n", i, age[(n-1)/2]);
        }
    }
    return 0;
}
