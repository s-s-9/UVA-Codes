#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, maximum;
    map<char, int> m;
    string s;
    while(getline(cin, s)){
        m.clear();
        maximum = 0;
        //cout<<s<<endl;
        for(i = 0; i<s.size(); i++){
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')){
                m[s[i]]++;
                if(m[s[i]]>maximum){
                    maximum = m[s[i]];
                }
            }
        }
        for(j = 'A'; j<='Z'; j++){
            if(m[j]==maximum){
                printf("%c", j);
            }
        }
        for(j = 'a'; j<='z'; j++){
            if(m[j]==maximum){
                printf("%c", j);
            }
        }
        printf(" %d\n", maximum);
    }
    return 0;
}
