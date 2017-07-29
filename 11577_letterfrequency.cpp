#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> m;
    int n, i, j, maximum;
    string s;
    scanf("%d", &n);
    getchar();
    for(i = 0; i<n; i++){
        maximum = 0;
        m.clear();
        getline(cin, s);
        for(j = 0; j<s.size(); j++){
            if(s[j]>='A' && s[j]<='Z'){
                s[j]+=32;
            }
            m[s[j]]++;
        }
        for(j = 'a'; j<='z'; j++){
            if(m[j]>maximum){
                maximum = m[j];
            }
        }
        for(j = 'a'; j<='z'; j++){
            if(m[j]==maximum){
                printf("%c", j);
            }
        }
        printf("\n");
    }
    return 0;
}
