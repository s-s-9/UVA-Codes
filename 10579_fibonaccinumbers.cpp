#include<bits/stdc++.h>

using namespace std;

string stringsum(string num1, string num2)
{
    //cout<<"num1: "<<num1<<", num2: "<<num2<<endl;
    string summed = "";
    int c = 0;
    //add leading zeros to make the strings of equal lengths
    if(num1.size()<num2.size()){
        while(num1.size()!=num2.size()){
            num1.insert(num1.begin(), '0');
        }
    }
    else if(num2.size()<num1.size()){
        while(num1.size()!=num2.size()){
            num2.insert(num2.begin(), '0');
        }
    }
    //add elements one by one (in reverse order)
    for(int i = num1.size()-1; i>=0; i--){
        int sum = (num1[i]-48)+(num2[i]-48)+c;
        c = sum/10;
        summed.push_back((sum%10)+48);
    }
    //add carry if there is
    if(c>0){
        summed.push_back(c+48);
    }
    //this is the reverse of the result, so reverse it to get the actual result
    reverse(summed.begin(), summed.end());
    //cout<<"sum: "<<summed<<endl;
    return summed;
}

int main()
{
    int n;
    vector<string> fibonacci;
    fibonacci.push_back("0");
    fibonacci.push_back("1");

    for(int i = 2; i<=5000; i++){
        fibonacci.push_back(stringsum(fibonacci[i-1], fibonacci[i-2]));
    }

    while(scanf("%d", &n)==1){
        cout<<fibonacci[n]<<endl;
    }
    return 0;
}

