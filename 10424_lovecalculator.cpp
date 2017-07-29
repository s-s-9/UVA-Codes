#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    int s1counter, s2counter, s1result, s2result, s1ultimateresult, s2ultimateresult, i;
    while(getline(cin, s1)){
        getline(cin, s2);
        s1counter = 0;
        s2counter = 0;
        for(i = 0; i<s1.size(); i++){
            if(s1[i]>='A' && s1[i]<='Z'){
                s1counter+=(s1[i]-64);
            }
            else if(s1[i]>='a' && s1[i]<='z'){
                s1counter+=(s1[i]-96);
            }
        }
        for(i = 0; i<s2.size(); i++){
            if(s2[i]>='A' && s2[i]<='Z'){
                s2counter+=(s2[i]-64);
            }
            else if(s2[i]>='a' && s2[i]<='z'){
                s2counter+=(s2[i]-96);
            }
        }
        s1ultimateresult = s1counter;
        if(s1counter>9){
            do{
                s1result = 0;
                while(s1counter>0){
                    s1result+=(s1counter%10);
                    s1counter/=10;
                }
                s1ultimateresult = s1result;
                s1counter = s1ultimateresult;
            }while(s1ultimateresult>9);
        }
        s2ultimateresult = s2counter;
        if(s2counter>9){
            do{
                s2result = 0;
                while(s2counter>0){
                    s2result+=(s2counter%10);
                    s2counter/=10;
                }
                s2ultimateresult = s2result;
                s2counter = s2ultimateresult;
            }while(s2ultimateresult>9);
        }
        if(s1ultimateresult>s2ultimateresult){
            printf("%.2f %\n", double(double(s2ultimateresult)/double(s1ultimateresult)*100.0));
        }
        else{
            printf("%.2f %\n", double(double(s1ultimateresult)/double(s2ultimateresult)*100.0));
        }
    }
    return 0;
}
