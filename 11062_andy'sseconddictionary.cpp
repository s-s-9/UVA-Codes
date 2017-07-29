#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<string> st;
    string s, ongoing, temp;
    vector<string> strings;
    int o, i;
    ongoing = "";
    while(cin>>s){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        temp = s;
        s = "";
        strings.clear();
        for(i = 0; i<temp.size(); i++){
            if(isalpha(temp[i]) || temp[i]=='-'){
                s.push_back(temp[i]);
            }
            else{
                strings.push_back(s);
                s = "";
            }
        }
        strings.push_back(s);
        for(i = 0; i<strings.size(); i++){
            s = strings[i];
            if(s==""){
                continue;
            }
            if(s[s.size()-1]!='-'){
                if(o==1){
                    ongoing.append(s);
                    //cout<<"ongoing "<<ongoing<<endl;
                    st.insert(ongoing);
                    ongoing = "";
                    o = 0;
                }
                else{
                    //cout<<"found "<<s<<endl;
                    st.insert(s);
                }
            }
            else{
                s.erase(s.size()-1);
                ongoing.append(s);
                o = 1;
            }
        }
    }
    set<string> :: iterator it;
    for(it = st.begin(); it!=st.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}
