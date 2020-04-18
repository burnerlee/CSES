#include<iostream>
using namespace std;
int main(){
    long input;
    cin>>input;
    if(input%4==0){
        cout<<"YES"<<"\n"<<input/2<<"\n";
        for(long i=1;i<=(input/2);i+=2){
            cout<<i<<" "<<input-i+1<<" ";
        }
        cout<<"\n"<<input/2<<"\n";
        for(long i=2;i<=input/2;i+=2){
            cout<<i<<" "<<input-i+1<<" ";
        }
    }
    else if((input+1)%4==0){
        cout<<"YES"<<"\n";
        long sum=input*(input+1)/4;
        long num_sum=0;
        long upto=1;
        while(num_sum<=sum){
            num_sum+=upto;
            upto++;
        }
        long diff=num_sum-sum;
        cout<<upto-2<<"\n";
        for(long i=1;i<upto;i++){
            if(i!=diff)
            cout<<i<<" ";
        }
        cout<<"\n"<<input-upto+2<<"\n";
        cout<<diff<<" ";
        while(upto<=input){
            cout<<upto<<" ";
            upto++;
        }
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    
}