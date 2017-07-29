#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("out.txt", "w", stdout);
    int precalc[300000], x, y, i, j, n;
    for(i = 0; i<300000; i++){
        precalc[i] = 0;
    }
    for(i = 1; i<=60; i++){
        if((i*i*i)<300000){
            precalc[i*i*i] = 1;
        }
        else{
            break;
        }
    }
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        x = -1;
        y = -1;
        for(i = 0; i<=70; i++){
            if((n+(i*i*i))<300000){
                if(precalc[i*i*i]==1 && precalc[n+(i*i*i)]==1){
                    y = i;
                    for(j = 0; j<=70; j++){
                        if(j*j*j<300000){
                            if(j*j*j==(n+i*i*i)){
                                x = j;
                                break;
                            }
                        }
                    }
                    break;
                }
            }
        }
        if(x==-1 && y==-1){
            printf("No solution\n");
        }
        else{
            printf("%d %d\n", x, y);
        }
    }
    return 0;
}
