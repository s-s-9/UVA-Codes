#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char, char> m;
    string s, result;
    int i;
    result = "";
    m['1'] = '`';   m['4'] = '2';   m['7'] = '5';   m['0'] = '8';
    m['2'] = '`';   m['5'] = '3';   m['8'] = '6';   m['-'] = '9';
    m['3'] = '1';   m['6'] = '4';   m['9'] = '7';   m['='] = '0';

    m['w'] = '\t';   m['t'] = 'e';   m['i'] = 'y';   m['['] = 'o';
    m['e'] = 'q';   m['y'] = 'r';   m['o'] = 'u';   m[']'] = 'p';
    m['r'] = 'w';   m['u'] = 't';   m['p'] = 'i';   m['\\'] = '[';

    m['s'] = 'a';   m['g'] = 'd';   m['k'] = 'h';   m['\''] = 'l';
    m['d'] = 'a';   m['h'] = 'f';   m['l'] = 'j';   m[' '] = ' ';
    m['f'] = 's';   m['j'] = 'g';   m[';'] = 'k';

    m['x'] = 'z';   m['b'] = 'c';   m[','] = 'n';
    m['c'] = 'z';   m['n'] = 'v';   m['.'] = 'm';
    m['v'] = 'x';   m['m'] = 'b';   m['/'] = ',';

    result = "";
    while(getline(cin, s)){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        //cout<<s<<endl;
        for(i = 0; i<s.size(); i++){
            result.push_back(m[s[i]]);
        }
        result.push_back('\n');
    }
    //result.erase(result.end());
    cout<<result;
    return 0;
}

