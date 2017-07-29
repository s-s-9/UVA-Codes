#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, result;
    result = "";
    while(getline(cin, s)){
        string temp = "";
        int i = 0;
        while(i<s.size()){
            while(s[i] == ' '){
                result.push_back(' ');
                i++;
                if(i>=s.size()){
                    break;
                }
            }
            if(i>=s.size()){
                break;
            }
            while(s[i]!=' '){
                temp.push_back(s[i]);
                i++;
                if(i>=s.size()){
                    break;
                }
            }
            reverse(temp.begin(), temp.end());
            result.append(temp);
            temp = "";
        }
        result.append("\n");
    }
    result.erase(result.length()-1);
    cout<<result<<endl;
    return 0;
}
