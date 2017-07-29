#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, k, n, colonfound, h, m, ct, mt, h2, m2;
    string time;
    scanf("%d", &n);
    for(k = 0; k<n; k++){
        cin>>time;
        colonfound = 0;
        h = 0;
        m = 0;
        for(i = 0; i<time.size(); i++){
            if(time[i]!=':'){
                if(colonfound==0){
                    h*=10;
                    h+=(time[i]-48);
                }
                else{
                    m*=10;
                    m+=(time[i]-48);
                }
            }
            else{
                colonfound = 1;
            }
        }
        if(h==12){
            h = 0;
        }
        ct = (h*60)+m;
        mt = 720 - ct;
        h2 = mt/60;
        if(h2==0){
            h2 = 12;
        }
        m2 = mt%60;
        if(h2<10 && m2<10){
            printf("0%d:0%d\n", h2, m2);
        }
        else if(h2<10){
            printf("0%d:%d\n", h2, m2);
        }
        else if(m2<10){
            printf("%d:0%d\n", h2, m2);
        }
        else{
            printf("%d:%d\n", h2, m2);
        }
    }
    return 0;
}
