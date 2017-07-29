#include<bits/stdc++.h>

using namespace std;

int main()
{

    string ss;
    vector<int> v;
    map<char, int> m;
    int i, j, n;
    char s[10000];
    scanf("%d", &n);
    getchar();
    for(i = 0; i<n; i++){
        gets(s);
        ss = s;
        transform(ss.begin(), ss.end(), ss.begin(), ::toupper);
        for(j = 0; j<ss.size(); j++){
            m[ss[j]]++;
        }
    }
    for(i = 'A'; i<='Z'; i++){
        if(m[i]>0){
            v.push_back(m[i]);
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(i = 0; i<v.size(); i++){
        for(j = 'A'; j<='Z'; j++){
            if(m[j]==v[i]){
                printf("%c %d\n", j, v[i]);
                m[j] = 0;
                break;
            }
        }
    }
    return 0;
}
