#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> m;
    int i, recentcode, currentcode, zeroneeded;
    string s, result;
    //B,F,P,V = 1;
    m['B'] = 1; m['F'] = 1; m['P'] = 1; m['V'] = 1;
    //C,S,K,G,J,Q,X,Z = 2;
    m['C'] = 2; m['S'] = 2; m['K'] = 2; m['G'] = 2; m['J'] = 2; m['Q'] = 2; m['X'] = 2; m['Z'] = 2;
    //D,T = 3;
    m['D'] = 3; m['T'] = 3;
    //L = 4;
    m['L'] = 4;
    //M,N = 5;
    m['M'] = 5; m['N'] = 5;
    //R = 6;
    m['R'] = 6;
    for(i = 0; i<9; i++){
        cout<<" ";
    }
    cout<<"NAME";
    for(i = 0; i<(25-4); i++){
        cout<<" ";
    }
    cout<<"SOUNDEX CODE"<<endl;
    while(cin>>s){
        result = "";
        result.push_back(s[0]);
        recentcode = m[s[0]];
        for(i = 1; i<s.size(); i++){
            if(result.size()==4){
                break;
            }
            currentcode = m[s[i]];
            if(currentcode==recentcode){
                continue;
            }
            else{
                if(currentcode!=0){
                    result.push_back(currentcode+48);
                }
            }
            recentcode = currentcode;
        }
        zeroneeded = 4-result.size();
        for(i = 0; i<zeroneeded; i++){
            result.push_back('0');
        }
        for(i = 0; i<9; i++){
            cout<<" ";
        }
        cout<<s;
        for(i = 0; i<(25-s.size()); i++){
            cout<<" ";
        }
        cout<<result<<endl;
    }
    for(i = 0; i<19; i++){
        cout<<" ";
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
