#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int first, second, addition;
    int a, f, s, counter;
    while(scanf("%lld %lld", &first, &second)==2){
        if(first==0 && second==0){
            break;
        }
        if(first<second){
            swap(first, second);
        }
        addition = first + second;
        counter = 0;
        while(addition!=0){
            a = addition % 10;
            f = first % 10;
            s = second % 10;
            addition/=10;
            first/=10;
            second/=10;
            //cout<<f<<" "<<s<<" "<<a<<endl;
            if(((f + s)%10)!=(a%10)){
                counter++;
            }
        }
        if(counter==0){
            cout<<"No carry operation."<<endl;
        }
        else if(counter==1){
            cout<<"1 carry operation."<<endl;
        }
        else{
            cout<<counter<<" carry operations."<<endl;
        }
    }
    return 0;
}
