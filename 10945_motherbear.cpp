#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, modifieds, original;
    int i;
    while(getline(cin, s)){
        if(s=="DONE"){
            break;
        }
        modifieds = "";
        for(i = 0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                modifieds.push_back(s[i]);
            }
            else if(s[i]>='a' && s[i]<='z'){
                modifieds.push_back(s[i]-32);
            }
        }
        original = modifieds;
        reverse(modifieds.begin(), modifieds.end());
        if(original==modifieds){
            printf("You won't be eaten!\n");
        }
        else{
            printf("Uh oh..\n");
        }
    }
    return 0;
}
