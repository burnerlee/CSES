#include <iostream>
using namespace std;
int mod = 1e9+7;
long long exponentiation(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a%mod;
    }
    long long value = exponentiation(a,b/2);
        (value*=value)%=mod;
    if(b%2==0){
        
        return value
    }
    else{
        
        return (value*a)%mod;
    }
}
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
    int a,b;
    cin >> a>>b;
    long long ans = exponentiation(a,b);
    cout<<ans<<endl;
    
    }
}