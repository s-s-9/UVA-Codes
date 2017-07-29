#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int n, i, marks, t1, t2, fin, att, ct1, ct2, ct3, m, avg;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        scanf("%d %d %d %d %d %d %d", &t1, &t2, &fin, &att, &ct1, &ct2, &ct3);
        v.clear();
        v.push_back(ct1);
        v.push_back(ct2);
        v.push_back(ct3);
        sort(v.begin(), v.end());
        marks = t1+t2+fin+att;
        avg = 0;
        avg+=(v[1] + v[2]);
        marks+=(avg/2);
        if(ct1==ct2 && ct2==ct3){
            marks+=ct1;
        }
        if(marks>=90){
            printf("Case %d: A\n", i);
        }
        else if(marks>=80){
            printf("Case %d: B\n", i);
        }
        else if(marks>=70){
            printf("Case %d: C\n", i);
        }
        else if(marks>=60){
            printf("Case %d: D\n", i);
        }
        else{
            printf("Case %d: F\n", i);
        }
    }
    return 0;
}
