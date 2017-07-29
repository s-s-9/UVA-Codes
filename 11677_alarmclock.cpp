#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, strminute, endminute;
    while(scanf("%d %d %d %d", &a, &b, &c, &d)==4){
        if(a==0 && b==0 && c==0 && d==0){
            break;
        }
        strminute = (a*60) + b;
        endminute = (c*60) + d;
        if(endminute<strminute){
            printf("%d\n", endminute-strminute+1440);
        }
        else{
            printf("%d\n", endminute-strminute);
        }
    }
    return 0;
}
