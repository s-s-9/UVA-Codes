#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ss, temp, result;
    int i, counter;
    counter = 0;
    while(getline(cin, ss)){
        //cout<<ss<<endl;
        for(i = 0; i<ss.size(); i++){
            if(ss[i]=='"'){
                if(counter==0){
                    ss[i] = '`';
                    temp = ss.substr(i+1, ss.size());
                    ss[i+1] = '`';
                    ss.erase(ss.begin()+i+2, ss.end());
                    ss.append(temp);
                    counter = 1;
                }
                else if(counter==1){
                    ss[i] = '\'';
                    temp = ss.substr(i+1, ss.size());
                    ss[i+1] = '\'';
                    ss.erase(ss.begin()+i+2, ss.end());
                    ss.append(temp);
                    counter = 0;
                }
            }
        }
        result.append(ss);
        result.append("\n");
    }
    result.erase(result.length()-1);
    cout<<result<<endl;
    return 0;
}
