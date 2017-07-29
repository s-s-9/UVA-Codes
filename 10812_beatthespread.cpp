#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, s, d, x, y;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d %d", &s, &d);
        if(s<d){
            printf("impossible\n");
            continue;
        }
        if(((s+d)%2)==1){
            printf("impossible\n");
            continue;
        }
        x = (s+d)/2;
        y = (s-x);
        if(x<0 || y<0){
            printf("impossible\n");
            continue;
        }
        if(x>y){
            printf("%d %d\n", x, y);
        }
        else{
            printf("%d %d\n", y, x);
        }
    }
    return 0;
}
