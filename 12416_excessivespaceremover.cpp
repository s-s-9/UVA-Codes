#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int currentspaces, maximum, i;
    while(getline(cin, s)){
        currentspaces = 0;
        maximum = 0;
        for(i = 0; i<s.size(); i++){
            if(s[i]==' '){
                //printf("Spacefound at %d\n", i);
                currentspaces++;
            }
            else{
                //printf("Currentspaces: %d\n", currentspaces);
                if(currentspaces>maximum){
                    maximum = currentspaces;
                }
                currentspaces = 0;
            }
        }
        currentspaces = 0;
        if(maximum==0){
            printf("0\n");
            continue;
        }
        while(maximum!=1){
            if(maximum%2==1){
                maximum = (maximum+1)/2;
            }
            else{
                maximum/=2;
            }
            currentspaces++;
        }
        printf("%d\n", currentspaces);
    }
    return 0;
}
