#include<bits/stdc++.h>

using namespace std;

int main()
{
    int noofgroups, groupchars, i;
    string temp, s;
    vector<string> tempshomahar;
    while(scanf("%d", &noofgroups)==1){
        if(noofgroups==0){
            break;
        }
        cin>>s;
        groupchars = (s.size())/noofgroups;
        temp = "";
        tempshomahar.clear();
        for(i = 0; i<s.size(); i++){
            if(i%groupchars==0){
                if(temp!=""){
                    //cout<<temp<<endl;
                    tempshomahar.push_back(temp);
                    temp = "";
                }
            }
            temp.push_back(s[i]);
        }
        //cout<<temp<<endl;
        if(temp!=""){
            tempshomahar.push_back(temp);
        }
        for(i = 0; i<tempshomahar.size(); i++){
            reverse(tempshomahar[i].begin(), tempshomahar[i].end());
            cout<<tempshomahar[i];
        }
        cout<<endl;
    }
    return 0;
}
