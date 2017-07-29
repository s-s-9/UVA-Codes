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
    string result = "0", s;
    while(cin>>s){
        if(s=="0"){
            break;
        }
        result = stringsum(result, s);
    }
    cout<<result<<endl;
    return 0;
}
