#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, n, p, q, w, quantt, weight;
    scanf("%d", &t);
    for(i = 1; i<=t; i++){
        scanf("%d %d %d", &n, &p, &q);
        weight = 0;
        quantt = 0;
        for(j = 0; j<n; j++){
            scanf("%d", &w);
            weight+=w;

            if(weight<=q && quantt<p){
                quantt++;
            }
        }
        printf("Case %d: %d\n", i, quantt);
    }
    return 0;
}
