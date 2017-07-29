#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, c, d;
    double f, result;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        scanf("%d %d", &c, &d);
        f = ((9.0/5.0)*double(c)) + 32.0;
        f+=double(d);
        result = (f-32.0) * (5.0/9.0);
        printf("Case %d: %.2f\n", i, result);
    }
    return 0;
}
