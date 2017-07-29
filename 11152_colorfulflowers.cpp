#include<bits/stdc++.h>

using namespace std;

int main()
{
    long double p, inr, ina, tra, outr, outa;
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c)==3){
        p = ((double)a+(double)b+(double)c)/2.0;
        tra = (sqrt(p*(p-(double)a)*(p-(double)b)*(p-(double)c)));
        inr = tra/p;
        ina = 2*acos(0)*inr*inr;
        outr = ((double)a*(double)b*(double)c)/(sqrt(((double)a+(double)b+(double)c)*((double)b+(double)c-(double)a)*((double)c+(double)a-(double)b)*((double)a+(double)b-(double)c)));
        outa = 2*acos(0)*outr*outr;
        printf("%.4Lf %.4Lf %.4Lf\n", (outa-tra), (tra-ina), ina);
    }
    return 0;
}
