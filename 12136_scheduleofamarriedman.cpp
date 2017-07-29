#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int, string> timespan;
    int n, i, j, booked, meetingstart, meetingend, boustart, bouend;
    string startmeeting, endmeeting, startbou, endbou;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        booked = 0;
        timespan.clear();
        cin>>startmeeting>>endmeeting;
        cin>>startbou>>endbou;
        //cout<<startmeeting<<endmeeting<<startbou<<endbou<<endl;
        meetingstart = ((((startmeeting[0]-48)*10)+(startmeeting[1]-48))*60) + ((((startmeeting[3])-48)*10)+(startmeeting[4]-48));
        meetingend = ((((endmeeting[0]-48)*10)+(endmeeting[1]-48))*60) + ((((endmeeting[3])-48)*10)+(endmeeting[4]-48));
        for(j = meetingstart; j<=meetingend; j++){
            timespan[j] = "booked";
        }
        //cout<<meetingstart<<" "<<meetingend<<endl;
        boustart = ((((startbou[0]-48)*10)+(startbou[1]-48))*60) + ((((startbou[3])-48)*10)+(startbou[4]-48));
        bouend = ((((endbou[0]-48)*10)+(endbou[1]-48))*60) + ((((endbou[3])-48)*10)+(endbou[4]-48));
        for(j = boustart; j<=bouend; j++){
            if(timespan[j] == "booked"){
                booked = 1;
                printf("Case %d: Mrs Meeting\n", i);
                break;
            }
        }
        if(booked==0){
            printf("Case %d: Hits Meeting\n", i);
        }
    }
    return 0;
}
