#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, ch, nm, result;
    string s;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        cin>>s;
        ch =(((s[0]-65)*26*26) + ((s[1]-65)*26) + (s[2]-65));
        nm = ((s[4]-48)*1000) + ((s[5]-48)*100) + ((s[6]-48)*10) + (s[7]-48);
        if(ch>nm){
            result = ch-nm;
        }
        else{
            result = nm-ch;
        }
        if(result<=100){
            printf("nice\n");
        }
        else{
            printf("not nice\n");
        }
    }
    return 0;
}
