#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter = 1;
    string s;
    while(cin>>s){
        if(s=="#"){
            break;
        }
        else if(s=="HELLO"){
            printf("Case %d: ENGLISH\n", counter);
        }
        else if(s=="HOLA"){
            printf("Case %d: SPANISH\n", counter);
        }
        else if(s=="HALLO"){
            printf("Case %d: GERMAN\n", counter);
        }
        else if(s=="BONJOUR"){
            printf("Case %d: FRENCH\n", counter);
        }
        else if(s=="CIAO"){
            printf("Case %d: ITALIAN\n", counter);
        }
        else if(s=="ZDRAVSTVUJTE"){
            printf("Case %d: RUSSIAN\n", counter);
        }
        else{
            printf("Case %d: UNKNOWN\n", counter);
        }
        counter++;
    }
    return 0;
}
