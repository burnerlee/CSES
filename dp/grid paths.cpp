#include <iostream>
using namespace std;
int main() {
    int input;
    cin >>input;
    char path[input][input];
    for(int i=0;i<input;i++){
        for(int j=0;j<input;j++){
            cin>>path[i][j];
        }
    }
    int mod = 1e9+7;
    int dp[input][input];
    dp[1][0]=1;
    dp[0][1]=1;
    dp[0][0]=0;
    for(int i=0;i<input;i++){
        for(int j=0;j<input;j++){
            if(path[input-i-1][input-j-1]=='*'){
                dp[i][j]=0;
                continue;
            }
            if((i==0&&j==0)||(i==0&&j==1)||(i==1&&j==0)){
                if(path[input-1][input-1]=='*'){
                    dp[input-1][input-1]=0;
                    cout<<0;
                    return 0;
                }
            }
            else{
            if(i>0&&path[input-i][input-j-1]=='.'){
                if(j>0&&path[input-i-1][input-j]=='.'){
                (dp[i][j]=dp[i-1][j]+dp[i][j-1])%=mod;
                continue;
            }
            else{
                (dp[i][j]=dp[i-1][j])%=mod;
                continue;
            }
            }
            else if(j>0&&path[input-i-1][input-j]=='.'){
                (dp[i][j]=dp[i][j-1])%=mod;
                continue;
            }
            else{
                dp[i][j]=0;
            }
        }
        }
    }
    // for(int i=0;i<input;i++){
    //     for(int j=0;j<input;j++){
    //         cout<<dp[input-i-1][input-j-1]<<"\t";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[input-1][input-1]<<endl;
}