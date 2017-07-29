#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int init, day, numbers;
    while(scanf("%lld %lld", &init, &day)==2){
        numbers = init;
        while(numbers<day){
            init++;
            numbers+=init;
        }
        cout<<init<<endl;
    }
    return 0;
}
