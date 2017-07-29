#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h, u, d, f, day;
    double current, w, fatigue;
    while(scanf("%d %d %d %d", &h, &u, &d, &f)==4){
        if(h==0){
            break;
        }
        day = 1;
        current = 0.0;
        w = double(u);
        fatigue = (double(u)*double(f))/100.0;
        while(true){
            if(w>0.0){
                current+=w;
            }
            if(current>double(h)){
                break;
            }
            current-=double(d);
            if(current<0.0){
                break;
            }
            w-=fatigue;
            day++;
        }
        if(current>double(h)){
            printf("success on day %d\n", day);
        }
        else if(current<0.0){
            printf("failure on day %d\n", day);
        }
    }
    return 0;
}
