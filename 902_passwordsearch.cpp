#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l, i, mx;
    map<string, int> m;
    string temp, t, current, result;
    vector<string> v;
    while(cin>>l>>t){
        v.clear();
        m.clear();
        for(i = 0; i<=(t.size()-l); i++){
            temp = t.substr(i, l);
            m[temp]++;
            v.push_back(temp);
            //cout<<temp<<endl;
        }
        mx = -1;
        for(i = 0; i<v.size(); i++){
            current = v[i];
            if(m[current]>mx){
                result = current;
                mx = m[current];
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
