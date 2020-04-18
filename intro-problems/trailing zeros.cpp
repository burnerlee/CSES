#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long input;
    long ans=0;
    cin>>input;
    for(long i=1;i>0;i++){
        long value=long(pow(5.0,double(i)));
        ans+=input/value;
        if(value>input)
        break;
    }
    cout<<ans;
}