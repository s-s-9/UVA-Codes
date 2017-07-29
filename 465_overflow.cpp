#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int fint, sint, resint;
    int firstover, secondover, i, opfound;
    string first, op, second, line, showfirst, showsecond;
    //2147483647
    while(cin>>first>>op>>second){
        /*first.clear();
        op.clear();
        second.clear();
        opfound = 0;
        for(i = 0; i<line.size(); i++){
            if(line[i]=='+' || line[i]=='*'){
                op.push_back(line[i]);
                opfound = 1;
                continue;
            }
            if(line[i]>='0' && line[i]<='9'){
                if(opfound==0){
                    first.push_back(line[i]);
                }
                else{
                    second.push_back(line[i]);
                }
            }
        }*/
        showfirst = first;
        showsecond = second;

        firstover = 0;
        secondover = 0;

        while(first[0]=='0'){
            first.erase(first.begin());
        }
        while(second[0]=='0'){
            second.erase(second.begin());
        }

        if(first.size()>10){
            firstover = 1;
        }
        if(second.size()>10){
            secondover = 1;
        }
        fint = 0;
        for(i = 0; i<first.size(); i++){
            fint*=10;
            fint+=(first[i]-48);
            if(fint>2147483647){
                break;
            }
        }
        if(fint>2147483647){
            firstover = 1;
        }
        sint = 0;
        for(i = 0; i<second.size(); i++){
            sint*=10;
            sint+=(second[i]-48);
            if(sint>2147483647){
                break;
            }
        }
        if(sint>2147483647){
            secondover = 1;
        }
        //cout<<line<<endl;
        cout<<showfirst<<" "<<op<<" "<<showsecond<<endl;
        if(firstover==1){
            cout<<"first number too big"<<endl;
        }
        if(secondover==1){
            cout<<"second number too big"<<endl;
        }
        if(op=="+"){
            if(firstover==1 || secondover==1){
                cout<<"result too big"<<endl;
            }
            else{
                resint = fint + sint;
                if(resint>2147483647){
                    cout<<"result too big"<<endl;
                }
            }
        }
        else{
            if(firstover==0 && secondover==0){
                resint = fint*sint;
                if(resint>2147483647){
                    cout<<"result too big"<<endl;
                }
            }
            else if(firstover==1){
                if(sint!=0){
                    cout<<"result too big"<<endl;
                }
            }
            else if(secondover==1){
                if(fint!=0){
                    cout<<"result too big"<<endl;
                }
            }
        }
    }
    return 0;
}
