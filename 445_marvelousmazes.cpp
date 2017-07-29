#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i, j, charcounter;
    while(getline(cin, s)){
        if(s==""){
            printf("\n");
            continue;
        }
        charcounter = 0;
        for(i = 0; i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                charcounter+=(s[i]-48);
            }
            else{
                if(s[i]=='b'){
                    for(j = 0; j<charcounter; j++){
                        printf(" ");
                    }
                }
                else if(s[i]=='!'){
                    printf("\n");
                }
                else{
                    for(j = 0; j<charcounter; j++){
                        printf("%c", s[i]);
                    }
                }
                charcounter = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
