#include<bits/stdc++.h>

using namespace std;

int main()
{
    int pal, mir, i;
    string s, temp;
    map<char, char> m;

    m['A'] = 'A';   m['O'] = 'O';   m['Y'] = 'Y';
    m['E'] = '3';   m['S'] = '2';   m['Z'] = '5';
    m['H'] = 'H';   m['T'] = 'T';   m['1'] = '1';
    m['I'] = 'I';   m['U'] = 'U';   m['2'] = 'S';
    m['J'] = 'L';   m['V'] = 'V';   m['3'] = 'E';
    m['L'] = 'J';   m['W'] = 'W';   m['5'] = 'Z';
    m['M'] = 'M';   m['X'] = 'X';   m['8'] = '8';

    while(getline(cin, s)){
        pal = 0;
        mir = 0;
        temp = s;

        for(i = 0; i<s.size(); i++){
            s[i] = m[s[i]];
        }
        reverse(s.begin(), s.end());
        if(temp==s){
            mir = 1;
        }
        s = temp;

        reverse(s.begin(), s.end());
        if(temp==s){
            pal = 1;
        }

        if(pal==0 && mir==0){
            cout<<temp<<" -- is not a palindrome."<<endl;

        }
        else if(pal==1 && mir==1){
            cout<<temp<<" -- is a mirrored palindrome."<<endl;

        }
        else if(pal==1 && mir==0){
            cout<<temp<<" -- is a regular palindrome."<<endl;

        }
        else if(pal==0 && mir==1){
            cout<<temp<<" -- is a mirrored string."<<endl;
        }
        cout<<endl;
    }
    return 0;
}
