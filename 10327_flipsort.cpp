#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k, p, counter, a[1001];
    while(scanf("%d", &p)==1){
        for(i = 0; i<p; i++){
            scanf("%d", &a[i]);
        }
        counter = 0;
        for(i = 0; i<p-1; i++){
            for(j = 0; j<p-i-1; j++){
                if(a[j]>a[j+1]){
                    swap(a[j], a[j+1]);
                    counter++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", counter);
    }
    return 0;
}

