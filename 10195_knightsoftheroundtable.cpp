#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, s, r;
    while(scanf("%lf %lf %lf", &a, &b, &c)==3){
        s = (a+b+c)/2.0;
        if(s==0.0){
            printf("The radius of the round table is: 0.000\n");
            continue;
        }
        r = sqrt(s*(s-a)*(s-b)*(s-c))/s;
        printf("The radius of the round table is: %.3f\n", r);
    }
    return 0;
}
