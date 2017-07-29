#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int, string> m;
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c)==3){
        m.clear();
        m[a] = m[a]+"A";
        m[b] = m[b]+"B";
        m[c] = m[c]+"C";
        //cout<<m[0]<<endl<<m[1]<<endl;
        if((m[0].size()==3)||(m[0].size()==0)){
            cout<<"*"<<endl;
        }
        else{
            if(m[0].size()==1){
                cout<<m[0]<<endl;
            }
            else{
                cout<<m[1]<<endl;
            }
        }
    }
    return 0;
}
