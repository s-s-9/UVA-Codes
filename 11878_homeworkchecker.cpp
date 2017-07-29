#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter, i, plusminus, equals, firstnum, secondnum, answer;
    string s;
    char oper;
    counter = 0;
    while(cin>>s){
        if(s[s.size()-1]=='?'){
            continue;
        }
        plusminus = 0;
        equals = 0;
        firstnum = 0;
        secondnum = 0;
        answer = 0;
        oper = ' ';
        for(i = 0; i<s.size(); i++){
            if(s[i]=='+' || s[i]=='-'){
                plusminus = 1;
                if(s[i]=='+'){
                    oper = '+';
                }
                else if(s[i]=='-'){
                    oper = '-';
                }
                continue;
            }
            if(s[i]=='='){
                equals = 1;
                continue;
            }
            if(plusminus==0 && equals==0){
                firstnum*=10;
                firstnum+=(s[i]-48);
            }
            else if(plusminus==1 && equals==0){
                secondnum*=10;
                secondnum+=(s[i]-48);
            }
            else if(plusminus==1 && equals==1){
                answer*=10;
                answer+=(s[i]-48);
            }
        }
        if(oper=='+' && ((firstnum + secondnum) == answer)){
            counter++;
        }
        else if(oper=='-' && ((firstnum - secondnum) == answer)){
            counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}
