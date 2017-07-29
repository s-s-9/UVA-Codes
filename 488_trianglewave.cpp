#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k, l, amp, freq;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        scanf("%d %d", &amp, &freq);
        if(i>1){
            printf("\n");
        }
        for(l = 0; l<freq; l++){
            if(l>0){
                printf("\n");
            }
            for(j = 1; j<=amp; j++){
                for(k = 0; k<j; k++){
                    printf("%d", j);
                }
                printf("\n");
            }
            for(j = amp-1; j>=0; j--){
                for(k = 0; k<j; k++){
                    printf("%d", j);
                }
                if(j>0){
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
