#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char, char> m;
    string s, result;
    int i;

    result = "";
    m['1'] = '`';   m['4'] = '3';   m['7'] = '6';   m['0'] = '9';
    m['2'] = '1';   m['5'] = '4';   m['8'] = '7';   m['-'] = '0';
    m['3'] = '2';   m['6'] = '5';   m['9'] = '8';   m['='] = '-';

    m['W'] = 'Q';   m['T'] = 'R';   m['I'] = 'U';   m['['] = 'P';
    m['E'] = 'W';   m['Y'] = 'T';   m['O'] = 'I';   m[']'] = '[';
    m['R'] = 'E';   m['U'] = 'Y';   m['P'] = 'O';   m['\\'] = ']';

    m['S'] = 'A';   m['G'] = 'F';   m['K'] = 'J';   m['\''] = ';';
    m['D'] = 'S';   m['H'] = 'G';   m['L'] = 'K';
    m['F'] = 'D';   m['J'] = 'H';   m[';'] = 'L';

    m['X'] = 'Z';   m['B'] = 'V';   m[','] = 'M';
    m['C'] = 'X';   m['N'] = 'B';   m['.'] = ',';
    m['V'] = 'C';   m['M'] = 'N';   m['/'] = '.';

    while(getline(cin, s)){
        for(i = 0; i<s.size(); i++){
            if(!m[s[i]]){
                result.push_back(s[i]);
            }
            else{
                result.push_back(m[s[i]]);
            }
        }
        result.push_back('\n');
    }
    //result.erase(result.end());
    cout<<result;
    return 0;
}
