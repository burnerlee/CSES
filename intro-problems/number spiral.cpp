#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    
    long input;
    cin>>input;
    long t=0;
    while(t<input){
    long y,x;
    cin>>y;
    cin>>x;
    long max=std::max(y,x);
    long low=(max-1)*(max-1);
    long high=max*max;
    long row=0,column=0;
    if (max%2==0){
        if(max==x){
        while(row<y){
            row++;
            low++;
        }
        cout<<low;
        
        }
    else{
        while(column<x-1){
            column++;
            high--;
        }
        cout<<high;
        
    }
    }
    else{
        if(max==y){
        while(column<x){
            column++;
            low++;
        }
        cout<<low;
        
        }
    else{
        while(row<y-1){
            row++;
            high--;
        }
        cout<<high;
       
    }
    }
    cout<<"\n";
    t++;
    }
    return 0;
    }

