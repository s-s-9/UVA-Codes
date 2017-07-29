#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, counter;
    char s[1000];
    string ss;
    map<char, int> m;

    m['a'] = 1; m['b'] = 2; m['c'] = 3;
    m['d'] = 1; m['e'] = 2; m['f'] = 3;
    m['g'] = 1; m['h'] = 2; m['i'] = 3;
    m['j'] = 1; m['k'] = 2; m['l'] = 3;
    m['m'] = 1; m['n'] = 2; m['o'] = 3;
    m['p'] = 1; m['q'] = 2; m['r'] = 3; m['s'] = 4;
    m['t'] = 1; m['u'] = 2; m['v'] = 3;
    m['w'] = 1; m['x'] = 2; m['y'] = 3; m['z'] = 4;
    m[' '] = 1;

    scanf("%d", &n);
    getchar();
    for(i = 1; i<=n; i++){
        gets(s);
        ss = s;
        counter = 0;
        for(j = 0; j<ss.size(); j++){
            counter+=m[ss[j]];
        }
        printf("Case #%d: %d\n", i, counter);
    }
    return 0;
}
