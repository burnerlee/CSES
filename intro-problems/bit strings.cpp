#include<iostream>
using namespace std;
int main(){
    long input;
    cin>>input;
    long value=1;
    long i=1;
    for(;i<=input;i++){
        value*=2;
        if(value>1000000007)
            break;
    }
    if(i==input+1){
        cout<<value;
     
    }
    if(i<input+1){
     for(long t=i;t<=input;t++){
        value%=1000000007;
        value*=2;
     } 
     cout<<value/2;  
    }
}