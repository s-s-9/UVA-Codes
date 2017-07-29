#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k, p, current, i, j;
    scanf("%d", &t);
    for(i = 1; i<=t; i++){
        scanf("%d %d %d", &n, &k, &p);
        current = k;
        for(j = 1; j<=p; j++){
            current++;
            if(current==(n+1)){
                current = 1;
            }
        }
        printf("Case %d: %d\n", i, current);
    }
    return 0;
}
