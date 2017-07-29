#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    int counter = 1;
    while(gets(s)){
        if(s[0]=='*'){
            break;
        }
        else if(s[0]=='H'){
            printf("Case %d: Hajj-e-Akbar\n", counter);
        }
        else{
            printf("Case %d: Hajj-e-Asghar\n", counter);
        }
        counter++;
    }
    return 0;
}
