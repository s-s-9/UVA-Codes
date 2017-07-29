#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, k, j, p, mins, ct, arrt, hours, colonfound, traveltime, m;
    string currtime, arrtime;
    cin>>n;
    for(i = 1; i<=n; i++){
        cin>>k>>currtime;
        m = 10000000;
        colonfound = 0;
        hours = 0;
        mins = 0;
        for(j = 0; j<currtime.size(); j++){
            if(currtime[j]==':'){
                colonfound = 1;
                continue;
            }
            else{
                if(colonfound==0){
                    hours*=10;
                    hours+=(currtime[j]-48);
                }
                else{
                    mins*=10;
                    mins+=(currtime[j]-48);
                }
            }
        }
        ct = (hours*60) + mins;
        //cout<<"ct: "<<ct<<endl;
        for(j = 0; j<k; j++){
            cin>>arrtime>>traveltime;

            colonfound = 0;
            hours = 0;
            mins = 0;
            for(p = 0; p<arrtime.size(); p++){
                if(arrtime[p]==':'){
                    colonfound = 1;
                    continue;
                }
                else{
                    if(colonfound==0){
                        hours*=10;
                        hours+=(arrtime[p]-48);
                    }
                    else{
                        mins*=10;
                        mins+=(arrtime[p]-48);
                    }
                }
            }
            arrt = (hours*60) + mins;
            if(arrt<ct){
                arrt+=(24*60);
            }
            if((arrt-ct+traveltime) < m){
                m = (arrt-ct+traveltime);
            }
        }
        printf("Case %d: %d\n", i, m);
    }
    return 0;
}
