#include<bits/stdc++.h>

using namespace std;

long long int n, i, j, k, pos, maximum, nums, f, current;
vector<long long int> v, fib;
vector<char> letters;
string s;
char message[101];

long long int fibonacci(long long int q)
{
    //printf("Called with: %lld\n", q);
    if(q==1){
        return 1;
    }
    if(q==2){
        return 2;
    }
    return (fib[q-1] + fib[q-2]);
}

int main()
{
    fib.push_back(0);
    fib.push_back(1);
    fib.push_back(2);
    for(i = 3; i<=50; i++){
        current = fibonacci(i);
        fib.push_back(current);
    }

    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &nums);
        v.clear();
        letters.clear();
        for(j = 0; j<nums; j++){
            scanf("%d", &f);
            v.push_back(f);
        }
        getchar();
        getline(cin, s);
        //cout<<s<<endl;
        for(j = 0; j<s.size(); j++){
            if(s[j]>='A' && s[j]<='Z'){
                letters.push_back(s[j]);
            }
        }
        for(j = 0; j<=100; j++){
            message[j] = ' ';
        }
        maximum = 0;
        for(j = 0; j<v.size(); j++){
            for(k = 1; k<=50; k++){
                if(v[j]==fib[k]){
                    pos = k;
                    if(pos>maximum){
                        maximum = pos;
                    }
                    break;
                }
            }
            message[pos] = letters[j];
        }
        for(j = 1; j<=maximum; j++){
            printf("%c", message[j]);
        }
        printf("\n");
    }
    return 0;
}
