#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, l;
    double w, r, red, green;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &l);
        w = (6.0/10.0) * double(l);
        r = (1.0/5.0) * double(l);
        red = acos(-1) * r * r;
        green = (double(l) * w) - red;
        printf("%.2f %.2f\n", red, green);
    }
    return 0;
}
