#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, p, flag, counter;
    while(scanf("%d", &n)==1){
        int arr[n];
        vector<int> v, v2;
        for(i = 0; i<n; i++){
            scanf("%d", &p);
            v.push_back(p);
        }
        for(i = 1; i<n; i++){
            if(v[i]>v[i-1]){
                v2.push_back(v[i]-v[i-1]);
            }
            else{
                v2.push_back(v[i-1]-v[i]);
            }
            sort(v2.begin(), v2.end());
        }
        flag = 0;
        counter = 1;
        for(i=0; i<v2.size(); i++){
            if(v2[i]!=counter){
                flag = 1;
                break;
            }
            counter++;
        }
        if(flag==0){
            cout<<"Jolly"<<endl;
        }
        if(flag==1){
            cout<<"Not jolly"<<endl;
        }
    }
    return 0;
}
