#include<bits/stdc++.h>

using namespace std;

int main()
{
    int hour, minute, colonfound, i;
    double houdeg, mindeg, result;
    string t;
    while(cin>>t){
        if(t=="0:00"){
            break;
        }
        colonfound = 0;
        hour = 0;
        minute = 0;
        for(i = 0; i<t.size(); i++){
            if(t[i]==':'){
                colonfound = 1;
                continue;
            }
            if(colonfound==0){
                hour*=10;
                hour+=(t[i]-48);
            }
            else{
                minute*=10;
                minute+=(t[i]-48);
            }
        }
        houdeg = ((double(hour)*60.0)+double(minute))*0.5;
        mindeg = double(minute)*6;
        result = abs(houdeg-mindeg);
        if(result>180.0){
            result = 360-result;
        }
        printf("%.3f\n", result);
    }
    return 0;
}
