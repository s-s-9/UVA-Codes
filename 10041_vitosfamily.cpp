#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("vitosfamily.txt", "w", stdout);
    long long int n, r, s;
    vector<int> streets;
    scanf("%lld", &n);
    for(int i = 0; i<n; i++){
        streets.clear();
        scanf("%lld", &r);
        for(int j = 0; j<r; j++){
            scanf("%lld", &s);
            streets.push_back(s);
        }
        sort(streets.begin(), streets.end());
        if(streets.size()%2==1){
            long long int index = (streets.size()-1)/2;
            long long int median = streets[index];
            long long int result = 0;
            for(int j = 0; j<streets.size(); j++){
                result+=(abs(median-streets[j]));
            }
            cout<<result<<endl;
        }
        else{
            long long int index1 = streets.size()/2;
            long long int index2 = index1-1;
            long long int median1 = (streets[index1]+streets[index2])/2;
            long long int median2 = median1+1;
            long long int result1 = 0;
            long long int result2 = 0;
            for(int j = 0; j<streets.size(); j++){
                result1+=(abs(median1-streets[j]));
                result2+=(abs(median2-streets[j]));
            }
            cout<<min(result1, result2)<<endl;
        }
    }
    return 0;
}
