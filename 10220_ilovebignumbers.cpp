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

string stringproduct(string A, string B) {
    string resultsofar = "0";
    int zeros = 0;
    int carry = 0;
    //nested for loop to multiply each character (in reversed order)
    for(int i = A.size()-1; i>=0; i--){
        //string to hold the result of this step
        string result = "";
        carry = 0;
        //append one more zero at each step
        for(int k = 0; k<zeros; k++){
            result.push_back('0');
        }
        for(int j = B.size()-1; j>=0; j--){
            int multiplied = ((A[i]-48)*(B[j]-48))+carry;
            carry = multiplied/10;
            result.push_back((multiplied%10)+48);
        }
        //add the carry if there is
        if(carry>0){
            result.push_back(carry+48);
        }
        //reverse the string aquired at this step
        reverse(result.begin(), result.end());
        //and add it to the result so far to get the actual result so far
        //cout<<"result so far: "<<resultsofar<<", result: "<<result<<endl;
        resultsofar = stringsum(resultsofar, result);
        zeros++;
    }
    //remove leading zeros
    int index = 0;
    while(resultsofar[index]=='0'){
        resultsofar.erase(resultsofar.begin());
        if(resultsofar.size()==0){
            return "0";
        }
    }
    return resultsofar;
}

int main()
{
    int n;
    vector<string> factorial;
    //0 factorial = 1
    factorial.push_back("1");
    for(int i = 1; i<=1000; i++){
        int current = i;
        string currents = "";
        while(current>0){
            currents.push_back((current%10)+48);
            current/=10;
        }
        reverse(currents.begin(), currents.end());
        //cout<<currents<<endl;
        factorial.push_back(stringproduct(currents, factorial[i-1]));
    }
    while(scanf("%d", &n)==1){
        int result = 0;
        for(int i = 0; i<factorial[n].size(); i++){
            result+=(factorial[n][i]-48);
        }
        cout<<result<<endl;
    }
    return 0;
}

