#include<bits/stdc++.h>

using namespace std;

int main()
{
    int result, n, flag;
    string s;
    char ss[200];
    stack<char> st;
    scanf("%d", &n);
    getchar();
    for(int i = 0; i<n; i++){
        while(!st.empty()){
            st.pop();
        }
        result = 0;
        flag = 0;
        gets(ss);
        s = ss;

        for(int j = 0; j<s.size(); j++){
            if(s[j]=='('){
                st.push('(');
            }
            else if(s[j]=='['){
                st.push('[');
            }
            else if(s[j]==')'){
                if(!st.empty()){
                    if(st.top()=='('){
                        st.pop();
                    }
                }
                else{
                    flag = 1;
                }
            }
            else if(s[j]==']'){
                if(!st.empty()){
                    if(st.top()=='['){
                        st.pop();
                    }
                }
                else{
                    flag = 1;
                }
            }
        }
        if(st.empty()){
            result = 1;
        }
        if(s.size()==0){
            result = 1;
        }
        if(flag==1){
            result = 0;
        }
        if(result==0){
            cout<<"No"<<endl;
        }
        else if(result==1){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
