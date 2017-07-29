#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char, char> m;
    char s[100];
    string ss, result;
    int i;

    m['A'] = '2'; m['B'] = '2'; m['C'] = '2';
    m['D'] = '3'; m['E'] = '3'; m['F'] = '3';
    m['G'] = '4'; m['H'] = '4'; m['I'] = '4';
    m['J'] = '5'; m['K'] = '5'; m['L'] = '5'; m['0'] = '0';
    m['M'] = '6'; m['N'] = '6'; m['O'] = '6'; m['1'] = '1';
    m['P'] = '7'; m['Q'] = '7'; m['R'] = '7'; m['S'] = '7';
    m['T'] = '8'; m['U'] = '8'; m['V'] = '8'; m['-'] = '-';
    m['W'] = '9'; m['X'] = '9'; m['Y'] = '9'; m['Z'] = '9';

    while(gets(s)){
        ss = s;
        result = "";
        for(i = 0; i<ss.size(); i++){
            result.push_back(m[ss[i]]);
        }
        cout<<result<<endl;
    }
    return 0;
}
