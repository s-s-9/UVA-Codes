#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sieve[100001], i, j, k, maximum, intnewnum;
    string num, newnum;
    for(i = 0; i<=100000; i++){
        sieve[i] = 0;
    }
    sieve[0] = 1;   sieve[1] = 1;
    for(i = 2; i<=100000; i++){
        if(sieve[i]==0){
            for(j = i+i; j<=100000; j+=i){
                sieve[j] = 1;
            }
        }
    }
    while(cin>>num){
        if(num=="0"){
            break;
        }
        maximum = 0;
        for(i = 0; i<num.size(); i++){
            for(j = 1; j<=5; j++){
                newnum = "";
                for(k = 0; k<j; k++){
                    if((i+k)<num.size()){
                        newnum.push_back(num[i+k]);
                    }
                }
                intnewnum = 0;
                for(k = 0; k<newnum.size(); k++){
                    intnewnum*=10;
                    intnewnum+=(newnum[k]-48);
                }
                //cout<<newnum<<": "<<intnewnum<<endl;
                if(sieve[intnewnum]==0){
                    if(intnewnum>maximum){
                        maximum = intnewnum;
                        //cout<<"New max: "<<maximum<<endl;
                    }
                }
            }
        }
        if(maximum>0){
            printf("%d", maximum);
        }
        printf("\n");
    }
    return 0;
}
