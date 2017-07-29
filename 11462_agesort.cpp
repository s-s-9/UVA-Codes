#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, p, arr[200], flag;
    while(scanf("%d", &n)==1){
        for(i = 0; i<200; i++){
            arr[i] = 0;
        }
        if(n==0){
            break;
        }
        for(i = 0; i<n; i++){
            scanf("%d", &p);
            arr[p]++;
        }
        flag = 0;
        for(i = 0; i<150; i++){
            if(arr[i]>0){
                for(j = 0; j<arr[i]; j++){
                    if(flag==0){
                        printf("%d", i);
                        flag = 1;
                    }
                    else{
                        printf(" %d", i);
                    }
                }
            }
        }
        printf("\n");
        //printf("%d", arr[0]);
        //for(i = 1; i<n; i++){
            //printf(" %d", arr[i]);
        //}
        //printf("\n");
    }
    return 0;
}
