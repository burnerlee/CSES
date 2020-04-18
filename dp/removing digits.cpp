#include <iostream>
#include <vector>
using namespace std;
int main(){
    int input;
    cin>>input;
    int dp[input+1];
    for (int i = 1; i <= input;i++){
    vector<int>digits;
    int number = i;
    while (number > 0)
    {
    int digit = number%10;
    number /= 10;
    digits.push_back(digit);
    }
        if(i<10){
            dp[i] = 1;
        }
        else{
            int min = input;
            for(int t=0;t<digits.size();t++){
                if(digits[t]!=0){
                if(dp[i-digits[t]] < min){
                    min = dp[i-digits[t]];
                }
            }}
            dp[i] = min+1;
        }
    }
    cout<<dp[input];
    // for (int i = 1;i<= input;i++){
    //     cout<<i<<"=>"<<*(dp+i)<<endl;
    // }
}