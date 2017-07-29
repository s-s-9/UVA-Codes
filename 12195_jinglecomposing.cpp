#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, current, curr;
    vector<string> notes;
    map<char, int> m;
    int i, j, result, counter;

    m['W'] = 64;
    m['H'] = 32;
    m['Q'] = 16;
    m['E'] = 8;
    m['S'] = 4;
    m['T'] = 2;
    m['X'] = 1;

    while(getline(cin, s)){
        if(s=="*"){
            break;
        }
        notes.clear();
        current = "";
        for(i = 1; i<s.size(); i++){
            if(s[i]=='/'){
                notes.push_back(current);
                current = "";
            }
            else{
                current.push_back(s[i]);
            }
        }
        result = 0;
        for(i = 0; i<notes.size(); i++){
            curr = notes[i];
            counter = 0;
            for(j = 0; j<curr.size(); j++){
                counter+=(m[curr[j]]);
            }
            if(counter==64){
                result++;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}
