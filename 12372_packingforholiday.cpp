#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, l, w, h;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        scanf("%d %d %d", &l, &w, &h);
        if(l<=20 && w<=20 && h<=20){
            printf("Case %d: good\n", i);
        }
        else{
            printf("Case %d: bad\n", i);
        }
    }
    return 0;
}
