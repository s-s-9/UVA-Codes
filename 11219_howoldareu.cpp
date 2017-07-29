#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, dd, mm, yy, dd2, mm2, yy2, age, curr, birt, firstslash, secondslash;
    string currentdate, birthday;
    scanf("%d", &n);
    for(j = 1; j<=n; j++){
        cin>>currentdate>>birthday;
        firstslash = 0;
        secondslash = 0;
        dd = 0;
        mm = 0;
        yy = 0;
        for(i = 0; i<currentdate.size(); i++){
            if(currentdate[i]=='/'){
                if(firstslash==0){
                    firstslash = 1;
                }
                else{
                    secondslash = 1;
                }
            }
            else{
                if(firstslash==0){
                    dd*=10;
                    dd+=(currentdate[i]-48);
                }
                else if(secondslash==0){
                    mm*=10;
                    mm+=(currentdate[i]-48);
                }
                else{
                    yy*=10;
                    yy+=(currentdate[i]-48);
                }
            }
        }
        firstslash = 0;
        secondslash = 0;
        dd2 = 0;
        mm2 = 0;
        yy2 = 0;
        for(i = 0; i<birthday.size(); i++){
            if(birthday[i]=='/'){
                if(firstslash==0){
                    firstslash = 1;
                }
                else{
                    secondslash = 1;
                }
            }
            else{
                if(firstslash==0){
                    dd2*=10;
                    dd2+=(birthday[i]-48);
                }
                else if(secondslash==0){
                    mm2*=10;
                    mm2+=(birthday[i]-48);
                }
                else{
                    yy2*=10;
                    yy2+=(birthday[i]-48);
                }
            }
        }
        //printf("%d %d %d\n%d %d %d\n\n", dd, mm ,yy, dd2, mm2, yy2);
        curr = (yy*365) + (mm*30) + dd;
        birt = (yy2*365) + (mm2*30) + dd2;
        if(curr<birt){
            printf("Case #%d: Invalid birth date\n", j);
        }
        else{
            age = curr - birt;
            //printf("Age: %d, curr: %d, birt: %d\n", age, curr, birt);
            if(floor(age/365)>130){
                printf("Case #%d: Check birth date\n", j);
            }
            else{
                printf("Case #%d: %d\n", j, age/365);
            }
        }
    }
    return 0;
}
