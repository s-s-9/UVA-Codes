#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k, p, counter;
    scanf("%d", &n);
    for(k = 0; k<n; k++){
        scanf("%d", &p);
        int a[p];
        for(i = 0; i<p; i++){
            scanf("%d", &a[i]);
        }
        counter = 0;
        for(i = 0; i<p; i++){
            for(j = i+1; j<p; j++){
                if(a[i]>a[j]){
                    swap(a[i], a[j]);
                    counter++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", counter);
    }
    return 0;
}
