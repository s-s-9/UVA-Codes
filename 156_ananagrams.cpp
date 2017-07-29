#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<string> st;
    set<string> :: iterator it;
    map<string, int> m;
    string ss, ss3, word, origiword, temp, result;
    int i;
    char s[100];
    result = "";
    ss = "";
    while(gets(s)){
        ss3 = s;
        if(ss3=="#"){
            break;
        }
        ss.append(ss3);
        ss.append(" ");
    }
    //cout<<ss<<endl;
    i = 0;
    while(i<ss.size()){
        word = "";
        while(ss[i]!=' '){
            word.push_back(ss[i]);
            i++;
            if(i>=ss.size()){
                break;
            }
        }
        origiword = word;
        st.insert(origiword);
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        sort(word.begin(), word.end());
        m[word]++;
        //cout<<"word: "<<word<<", m[word]: "<<m[word]<<endl;
        i++;
        //cout<<word<<endl;
    }
    for(it = st.begin(); it!=st.end(); it++){
        temp = *it;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        sort(temp.begin(), temp.end());
        //cout<<"temp: "<<temp<<", m[temp]: "<<m[temp]<<endl;
        if(m[temp]==1){
            //cout<<*it<<endl;
            result.append(*it);
            result.append("\n");
        }
    }
    cout<<result;
    return 0;
}
