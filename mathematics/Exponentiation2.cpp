#include <iostream>
using namespace std;
long long exponentiation(int a,int b,int mod){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a%mod;
    }
    long long value = exponentiation(a,b/2,mod);
        (value*=value)%=mod;
    if(b%2==0){
        
        return value;
    }
    else{
        
        return (value*a)%mod;
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
    int a,b,c;
    cin >> a>>b>>c;
    int mod1 = 1e9+6;
    int mod2 = 1e9+7;
    long long ans1 = exponentiation(b,c,mod1);
    long long ans2 = exponentiation(a,int(ans1),mod2);
    cout<<ans2<<endl;
    
    }
}