#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, p[3], i;
    scanf("%d", &t);
    for(i = 1; i<=t; i++){
        scanf("%d %d %d", &p[0], &p[1], &p[2]);
        sort(p, p+3);
        printf("Case %d: %d\n", i, p[1]);
    }
    return 0;
}
