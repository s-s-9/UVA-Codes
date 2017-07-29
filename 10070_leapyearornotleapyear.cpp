#include<bits/stdc++.h>

using namespace std;

int main()
{
    string shaal;
    int dby4, dby100, dby400, dby15, dby55, current, i, counter;
    bool leapyear, hulukulu, bulukulu;
    counter = 0;
    while(cin>>shaal){
        dby4 = 0;
        dby100 = 0;
        dby400 = 0;
        dby15 = 0;
        dby55 = 0;
        leapyear = false;
        hulukulu = false;
        bulukulu = false;

        //divisibility by 4 check
        current = 0;
        for(i = 0; i<shaal.size(); i++){
            current*=10;
            current+=(shaal[i]-48);
            current = current%4;
        }
        if(current==0){
            dby4 = 1;
        }

        //divisibility by 100 check
        current = 0;
        for(i = 0; i<shaal.size(); i++){
            current*=10;
            current+=(shaal[i]-48);
            current = current%100;
        }
        if(current==0){
            dby100 = 1;
        }

        //divisibility by 400 check
        current = 0;
        for(i = 0; i<shaal.size(); i++){
            current*=10;
            current+=(shaal[i]-48);
            current = current%400;
        }
        if(current==0){
            dby400 = 1;
        }

        //divisibility by 15 check
        current = 0;
        for(i = 0; i<shaal.size(); i++){
            current*=10;
            current+=(shaal[i]-48);
            current = current%15;
        }
        if(current==0){
            dby15 = 1;
        }

        //divisibility by 55 check
        current = 0;
        for(i = 0; i<shaal.size(); i++){
            current*=10;
            current+=(shaal[i]-48);
            current = current%55;
        }
        if(current==0){
            dby55 = 1;
        }

        //leap year check
        if(dby400==1){
            leapyear = true;
        }
        else if(dby4==1 && dby100==0){
            leapyear = true;
        }

        //hulukulu check
        if(dby15==1){
            hulukulu = true;
        }

        //bulukulu check
        if(leapyear==true && dby55==1){
            bulukulu = true;
        }

        //printing the results
        if(counter>0){
            printf("\n");
        }
        if(leapyear==false && hulukulu==false && bulukulu==false){
            printf("This is an ordinary year.\n");
        }
        else{
            if(leapyear==true){
                printf("This is leap year.\n");
            }
            if(hulukulu==true){
                printf("This is huluculu festival year.\n");
            }
            if(bulukulu==true){
                printf("This is bulukulu festival year.\n");
            }
        }
        counter++;
    }
    return 0;
}
