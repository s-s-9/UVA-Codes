#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, t, i;
    double result;
    scanf("%lld", &t);
    for(i = 0; i<t; i++){
        scanf("%lld", &n);
        result = (-1+sqrt(1-4*(-2*double(n))))/(2.0);
        printf("%d\n", int(floor(result)));
    }
    return 0;
}
