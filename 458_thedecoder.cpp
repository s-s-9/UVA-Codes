#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i;
    while(getline(cin, s)){
        for(i = 0; i<s.size(); i++){
            printf("%c", s[i]-7);
        }
        printf("\n");
    }
    return 0;
}
