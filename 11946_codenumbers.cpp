#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char, char> m;
    int i, j, n;
    string s;
    m['3'] = 'E'; m['0'] = 'O'; m['1'] = 'I'; m['4'] = 'A'; m['9'] = 'P'; m['8'] = 'B'; m['5'] = 'S'; m['7'] = 'T'; m['2'] = 'Z'; m['6'] = 'G';
    scanf("%d", &n);
    getchar();
    for(i = 0; i<n; ){
        getline(cin, s);
        if(cin.eof()){
            break;
        }
        if(s==""){
            i++;
            if(i<n){
                cout<<endl;
            }
            continue;
        }
        for(j = 0; j<s.size(); j++){
            if(s[j]>='0' && s[j]<='9'){
                cout<<m[s[j]];
            }
            else{
                cout<<s[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
