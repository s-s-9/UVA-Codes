#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, i, j, p, a;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        scanf("%d", &p);
        m = 0;
        for(j = 0; j<p; j++){
            scanf("%d", &a);
            if(a > m){
                m = a;
            }
        }
        printf("Case %d: %d\n", i, m);
    }
    return 0;
}
