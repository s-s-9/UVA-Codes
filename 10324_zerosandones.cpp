#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int c = 1, n, start, finish;
    while(cin>>s){
        scanf("%d", &n);
        for(int i = 0; i<n; i++){
            scanf("%d %d", &start, &finish);
            if(start>finish){
                swap(start, finish);
            }
            char ch = s[start];
            string result = "Yes";
            for(int j = start; j<=finish; j++){
                if(s[j]!=ch){
                    result = "No";
                    break;
                }
            }
            if(i==0){
                cout<<"Case "<<c<<":"<<endl;
            }
            cout<<result<<endl;
        }
        c++;
    }
    return 0;
}
