#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, a, b, x, y;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        scanf("%d %d", &x, &y);
        for(i = 0; i<n; i++){
            scanf("%d %d", &a, &b);
            if(a==x || b==y){
                printf("divisa\n");
            }
            else if(a>x && b>y){
                printf("NE\n");
            }
            else if(a<x && b>y){
                printf("NO\n");
            }
            else if(a<x && b<y){
                printf("SO\n");
            }
            else if(a>x && b<y){
                printf("SE\n");
            }
        }
    }
    return 0;
}
