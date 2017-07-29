#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> m;
    int n, i, j, mi;
    string s;
    scanf("%d", &n);
    //getchar();
    for(i = 0; i<n; i++){
        cin>>s;
        mi = 1000000;
        m.clear();
        for(j = 0; j<s.size(); j++){
            m[s[j]]++;
        }
        if(m['M']<mi){
            mi = m['M'];
        }
        if(floor(m['A']/3)<mi){
            mi = floor(m['A']/3);
        }
        if(floor(m['R']/2)<mi){
            mi = floor(m['R']/2);
        }
        if(m['G']<mi){
            mi = m['G'];
        }
        if(m['I']<mi){
            mi = m['I'];
        }
        if(m['T']<mi){
            mi = m['T'];
        }
        printf("%d\n", mi);
    }
    return 0;
}
