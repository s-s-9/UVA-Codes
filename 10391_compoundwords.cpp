#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, k;
    string s, substr1, substr2, current;
    vector<string> v, result;
    map<string, int> m;
    set<string> st;
    while(cin>>s){
        v.push_back(s);
        m[s] = 1;
    }
    for(i = 0; i<v.size(); i++){
        current = v[i];
        //cout<<"Current: "<<current<<endl;
        for(k = 1; k<current.size(); k++){
            substr1 = current.substr(0, k);
            substr2 = current.substr(k, current.size()-(k));
            //cout<<"S1: "<<substr1<<", S2: "<<substr2<<endl;
            if(m[substr1]==1 && m[substr2]==1){
                st.insert(current);
            }
        }

    }
    set<string> :: iterator it;
    for(it = st.begin(); it!=st.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}
