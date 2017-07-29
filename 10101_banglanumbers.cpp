#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    string result;
    int last, shata, hajar, lakh, kuti, lastlast, shatashata, hajarhajar, lakhlakh, kutikuti, kutiase, fn, t;
    t = 1;
    while(scanf("%lld", &n)==1){
        if(n==0){
            printf("%4d. 0\n", t);
            t++;
            continue;
        }
        last = 0;
        shata = 0;
        hajar = 0;
        lakh = 0;
        kuti = 0;
        lastlast = 0;
        shatashata = 0;
        hajarhajar = 0;
        lakhlakh = 0;
        kutikuti = 0;
        kutiase = 0;
        fn = 0;
        while(n>0){
            last = n%100;
            n/=100;
            if(n==0){
                break;
            }
            shata = n%10;
            n/=10;
            if(n==0){
                break;
            }
            hajar = n%100;
            n/=100;
            if(n==0){
                break;
            }
            lakh = n%100;
            n/=100;
            if(n==0){
                break;
            }
            kuti = n%100;
            n/=100;
            if(n==0){
                break;
            }

            shatashata = n%10;
            n/=10;
            if(n==0){
                break;
            }
            hajarhajar = n%100;
            n/=100;
            if(n==0){
                break;
            }
            lakhlakh = n%100;
            n/=100;
            if(n==0){
                break;
            }
            kutikuti = n%100;
            n/=100;
            if(n==0){
                break;
            }
        }
        printf("%4d. ", t);
        if(kutikuti!=0){
            kutiase = 1;
            if(fn==0){
                printf("%d kuti", kutikuti);
                fn = 1;
            }
            else{
                printf(" %d kuti", kutikuti);
            }
        }
        if(lakhlakh!=0){
            kutiase = 1;
            if(fn==0){
                printf("%d lakh", lakhlakh);
                fn = 1;
            }
            else{
                printf(" %d lakh", lakhlakh);
            }
        }
        if(hajarhajar!=0){
            kutiase = 1;
            if(fn==0){
                printf("%d hajar", hajarhajar);
                fn = 1;
            }
            else{
                printf(" %d hajar", hajarhajar);
            }
        }
        if(shatashata!=0){
            kutiase = 1;
            if(fn==0){
                printf("%d shata", shatashata);
                fn = 1;
            }
            else{
                printf(" %d shata", shatashata);
            }
        }

        if(kuti!=0){
            if(fn==0){
                printf("%d kuti", kuti);
                fn = 1;
            }
            else{
                printf(" %d kuti", kuti);
            }
        }

        if(kutiase==1 && kuti==0){
            printf(" kuti");
        }

        if(lakh!=0){
            if(fn==0){
                printf("%d lakh", lakh);
                fn = 1;
            }
            else{
                printf(" %d lakh", lakh);
            }
        }
        if(hajar!=0){
            if(fn==0){
                printf("%d hajar", hajar);
                fn = 1;
            }
            else{
                printf(" %d hajar", hajar);
            }
        }
        if(shata!=0){
            if(fn==0){
                printf("%d shata", shata);
                fn = 1;
            }
            else{
                printf(" %d shata", shata);
            }
        }
        if(last!=0){
            if(fn==0){
                printf("%d", last);
                fn = 1;
            }
            else{
                printf(" %d", last);
            }
        }
        printf("\n");
        t++;
    }
    return 0;
}
