#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c, n, arr[10000], i, j, counter;
    scanf("%d", &c);
    for(i = 0; i<c; i++){
        scanf("%d", &n);
        counter = 0;
        for(j = 0; j<n; j++){
            scanf("%d", &arr[j]);
            counter+=arr[j];
        }
        float avg = float(counter)/float(n);
        //printf("%f\n", avg);
        int aa = 0;
        for(j = 0; j<n; j++){
            if(float(arr[j]>avg)){
                aa++;
            }
        }
        float result = (float(aa)/float(n))*100.0;
        printf("%.3f%\n", result);
    }
    return 0;
}
