#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, paisi, inotaccepted, jnotaccepted, temp, second, counter, lowerlimit;
    map<int, int> m;
    counter = 0;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        if(counter>0){
            printf("\n");
        }
        lowerlimit = 10000;
        if(n*1000>=10000){
            lowerlimit = n*1000;
        }
        paisi = 0;
        for(i = lowerlimit; i<=99999; i++){
            m.clear();
            inotaccepted = 0;
            temp = i;
            while(temp>0){
                if(m[temp%10]==1){
                    inotaccepted = 1;
                }
                else{
                    m[temp%10] = 1;
                }
                temp/=10;
            }
            if(inotaccepted==1){
                continue;
            }
            if(i%n>0){
                continue;
            }
            second = i/n;
            jnotaccepted = 0;
            if(second<10000){
                if(m[0]==1){
                    jnotaccepted = 1;
                }
                else{
                    m[0] = 1;
                }
            }
            temp = second;
            while(temp>0){
                if(m[temp%10]==1){
                    jnotaccepted = 1;
                }
                else{
                    m[temp%10] = 1;
                }
                temp/=10;
            }
            if(jnotaccepted==1){
                continue;
            }
            if(second>=1000){
                if(second<10000){
                    paisi = 1;
                    printf("%d / 0%d = %d\n", i, second, n);
                }
                else{
                    paisi = 1;
                    printf("%d / %d = %d\n", i, second, n);
                }
            }
        }
        if(paisi==0){
            printf("There are no solutions for %d.\n", n);
        }
        counter++;
    }
    return 0;
}
