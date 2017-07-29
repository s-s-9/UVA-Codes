#include<bits/stdc++.h>

using namespace std;

int r, ri, rv, rx, rl, rc;

void remainderWork(int rem)
{
    if(rem==1){
        ri++;
    }
    else if(rem==2){
        ri+=2;
    }
    else if(rem==3){
        ri+=3;
    }
    else if(rem==4 || rem==6){
        ri++;
        rv++;
    }
    else if(rem==5){
        rv++;
    }
    else if(rem==7){
        rv++;
        ri+=2;
    }
    else if(rem==8){
        rv++;
        ri+=3;
    }
    else if(rem==9){
        ri++;
        rx++;
    }
}

int main()
{
    int i, n;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        ri = 0;
        rv = 0;
        rx = 0;
        rl = 0;
        rc = 0;
        for(i = 1; i<=n; i++){
            if(i==100){
                rc++;
            }
            else if(i>=90){
                rx++;
                rc++;
                r = i%10;
                remainderWork(r);
            }
            else if(i>=80){
                rl++;
                rx+=3;
                r = i%10;
                remainderWork(r);
            }
            else if(i>=70){
                rl++;
                rx+=2;
                r = i%10;
                remainderWork(r);
            }
            else if(i>=60){
                rl++;
                rx++;
                r = i%10;
                remainderWork(r);
            }
            else if(i>=50){
                rl++;
                r = i%10;
                remainderWork(r);
            }
            else if(i>=40){
                rx++;
                rl++;
                r = i%10;
                remainderWork(r);
            }
            else if(i>=30){
                rx+=3;
                r = i%10;
                remainderWork(r);
            }
            else if(i>=20){
                rx+=2;
                r = i%10;
                remainderWork(r);
            }
            else if(i>=10){
                rx++;
                r = i%10;
                remainderWork(r);
            }
            else{
                r = i%10;
                remainderWork(r);
            }
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, ri, rv, rx, rl, rc);
    }
    return 0;
}
