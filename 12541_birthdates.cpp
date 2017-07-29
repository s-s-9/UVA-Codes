#include<bits/stdc++.h>

using namespace std;

int main()
{
    int dd, yday, oday, mm, ymonth, omonth, yyyy, yyear, oyear, i, n;
    string old, young, name;
    scanf("%d", &n);
    oyear = 999999999;
    omonth = 13;
    oday = 32;
    yyear = 0;
    ymonth = 0;
    yday = 0;
    for(i = 0; i<n; i++){
        cin>>name>>dd>>mm>>yyyy;
        if(yyyy>yyear){
            yyear = yyyy;
            ymonth = mm;
            yday = dd;
            young = name;
        }
        else if(yyyy==yyear){
            if(mm>ymonth){
                ymonth = mm;
                yday = dd;
                young = name;
            }
            else if(mm==ymonth){
                if(dd>yday){
                    yday = dd;
                    young = name;
                }
            }
        }
        if(yyyy<oyear){
            oyear = yyyy;
            omonth = mm;
            oday = dd;
            old = name;
        }
        else if(yyyy==oyear){
            if(mm<omonth){
                omonth = mm;
                oday = dd;
                old = name;
            }
            else if(mm==ymonth){
                if(dd<oday){
                    oday = dd;
                    old = name;
                }
            }
        }
    }
    cout<<young<<endl<<old<<endl;
    return 0;
}
