#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, n, counter;
    vector<int> binary;
    while(scanf("%lld", &n)==1){
        if(n==0){
            break;
        }
        binary.clear();
        counter = 0;
        while(n>0){
            if(n%2==1){
                counter++;
            }
            binary.push_back(n%2);
            n/=2;
        }
        printf("The parity of ");
        for(i = binary.size()-1; i>=0; i--){
            cout<<binary[i];
        }
        printf(" is %lld (mod 2).", counter);
        cout<<endl;
    }
    return 0;
}
