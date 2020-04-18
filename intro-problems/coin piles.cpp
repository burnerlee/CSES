#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long input;
    cin>>input;
    for (int i=0;i<input;i++){
        long a,b;
        cin>>a>>b;
        bool ans=false;
        long max=std::max(a,b);
        long min=std::min(a,b);
        if(min<=max&&2*min>=max&&(min+max)%3==0){
            ans=true;
        }
        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}