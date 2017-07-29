#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, counter;
    counter = 1;
    double s, a, v, u, t;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        if(n==1){
            scanf("%lf %lf %lf", &u, &v, &t);
            s = ((u + v)/2)*t;
            a = (v-u)/t;

            printf("Case %d: %.3f %.3f\n", counter, s, a);
        }
        else if(n==2){
            scanf("%lf %lf %lf", &u, &v, &a);
            t = (v-u)/a;
            s = (u*t) + (0.5*a*t*t);

            printf("Case %d: %.3f %.3f\n", counter, s, t);
        }
        else if(n==3){
            scanf("%lf %lf %lf", &u, &a, &s);
            v = sqrt(u*u + 2*a*s);
            t = (v-u)/a;

            printf("Case %d: %.3f %.3f\n", counter, v, t);
        }
        else if(n==4){
            scanf("%lf %lf %lf", &v, &a, &s);
            u = sqrt(v*v - 2*a*s);
            t = (v-u)/a;

            printf("Case %d: %.3f %.3f\n", counter, u, t);
        }
        counter++;
    }
    return 0;
}
