#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, height, prev, hj, lj, walls;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        prev = -1;
        hj = 0;
        lj = 0;
        scanf("%d", &walls);
        for(j = 0; j<walls; j++){
            scanf("%d", &height);
            if(prev==-1){
                prev = height;
                continue;
            }
            if(height>prev){
                hj++;
            }
            else if(height<prev){
                lj++;
            }
            prev = height;
        }
        printf("Case %d: %d %d\n", i, hj, lj);
    }
    return 0;
}
