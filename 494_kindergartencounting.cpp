#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i, counter;
    while(getline(cin, s)){
        counter = 0;
        for(i = 0; i<s.size(); i++){
            if(isalpha(s[i])){
                counter++;
                while(isalpha(s[i])){
                    if(i==s.size()){
                        break;
                    }
                    i++;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
