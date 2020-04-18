#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    vector<int>prices(n),pages(n);
    for (int&v : prices) cin >> v;
    for (int&v : pages) cin >> v;
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    for(int i=1;i<=n; i++){
        for(int j=0; j<=x; j++){
            if(j<prices[i-1]){
                dp[i][j] = dp[i-1][j];
            }
            else{
            dp[i][j]=max(dp[i-1][j-prices[i-1]]+pages[i-1],dp[i-1][j]);
            }
        }
    }
    cout<<dp[n][x];
}