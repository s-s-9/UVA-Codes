#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> m;
    map<int, string> m2;
    int n, month, day, today, ektarikh, i;

    m[1] = 0;   m2[0] = "Saturday";
    m[2] = 3;   m2[1] = "Sunday";
    m[3] = 3;   m2[2] = "Monday";
    m[4] = 6;   m2[3] = "Tuesday";

    m[5] = 1;   m2[4] = "Wednesday";
    m[6] = 4;   m2[5] = "Thursday";
    m[7] = 6;   m2[6] = "Friday";
    m[8] = 2;

    m[9] = 5;
    m[10] = 0;
    m[11] = 3;
    m[12] = 5;

    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d %d", &month, &day);
        ektarikh = m[month];
        today = ektarikh + (day%7) - 1;
        if(today==-1){
            today = 6;
        }
        cout<<m2[today%7]<<endl;
    }
    return 0;
}
