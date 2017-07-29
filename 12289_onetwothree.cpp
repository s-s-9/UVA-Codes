#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    string num;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        cin>>num;
        if( (num[0]=='o' && num[1]=='n') || (num[0]=='o' && num[2]=='e') || (num[1]=='n' && num[2]=='e') ){
            cout<<"1"<<endl;
        }
        else if( (num[0]=='t' && num[1]=='w') || (num[0]=='t' && num[2]=='o') || (num[1]=='w' && num[2]=='o') ){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }
    return 0;
}
