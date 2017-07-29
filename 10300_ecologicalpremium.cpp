#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, f, fy, an, ef, i, j, result;
    scanf("%d", &t);
    for(i = 0; i<t; i++){
        scanf("%d", &f);
        result = 0;
        for(j = 0; j<f; j++){
            scanf("%d %d %d", &fy, &an, &ef);
            result += (fy*ef);
        }
        printf("%d\n", result);
    }
    return 0;
}
