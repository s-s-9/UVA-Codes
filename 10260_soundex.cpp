#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char, char> m;
    string s, result, answer;
    char current;
    int i;
    m['B'] = '1'; m['F'] = '1'; m['P'] = '1'; m['V'] = '1';
    m['C'] = '2'; m['G'] = '2'; m['J'] = '2'; m['K'] = '2'; m['Q'] = '2'; m['S'] = '2'; m['X'] = '2'; m['Z'] = '2';
    m['D'] = '3'; m['T'] = '3';
    m['L'] = '4';
    m['M'] = '5'; m['N'] = '5';
    m['R'] = '6';
    while(cin>>s){
        result = "";
        for(i = 0; i<s.size(); i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='H' || s[i]=='W' || s[i]=='Y'){
                result.push_back('0');
                continue;
            }
            result.push_back(m[s[i]]);
            //cout<<s[i]<<": "<<result<<endl;
            current = s[i];
        }
        answer = "";
        current = ' ';
        for(i = 0; i<result.size(); i++){
            if(result[i]=='0'){
                current = result[i];
                continue;
            }
            if(result[i]!=current){
                answer.push_back(result[i]);
                current = result[i];
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}
