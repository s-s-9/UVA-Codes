#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, current;
    int i;
    set<string> st;
    while(getline(cin, s)){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        current = "";
        for(i = 0; i<s.size(); i++){
            if(isalpha(s[i])){
                current.push_back(s[i]);
            }
            else{
                if(current!=""){
                    st.insert(current);
                    current = "";
                }
            }
        }
        if(current!=""){
            st.insert(current);
        }
    }
    set<string> :: iterator it;
    for(it = st.begin(); it!=st.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}
