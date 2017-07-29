#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, f, i, p, counter;
    vector<int> vm, vf;
    counter = 1;
    while(scanf("%d %d", &m, &f)==2){
        if(m==0 && f==0){
            break;
        }
        vm.clear();
        vf.clear();
        for(i = 0; i<m; i++){
            scanf("%d", &p);
            vm.push_back(p);
        }
        for(i = 0; i<f; i++){
            scanf("%d", &p);
            vf.push_back(p);
        }
        sort(vm.begin(), vm.end());
        reverse(vm.begin(), vm.end());
        sort(vf.begin(), vf.end());
        reverse(vf.begin(), vf.end());
        if(f==m){
            printf("Case %d: 0\n", counter);
        }
        else if(f>m){
            printf("Case %d: 0\n", counter);
        }
        else if(m>f){
            printf("Case %d: %d %d\n", counter, (m-f), vm[vm.size()-1]);
        }
        counter++;
    }
    return 0;
}
