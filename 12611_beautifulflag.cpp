#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, r;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        scanf("%d", &r);
        printf("Case %d:\n", i);
        printf("-%d %d\n", (45*r)/20, (30*r)/20);
        printf("%d %d\n", (55*r)/20, (30*r)/20);
        printf("%d -%d\n", (55*r)/20, (30*r)/20);
        printf("-%d -%d\n", (45*r)/20, (30*r)/20);
    }
    return 0;
}
