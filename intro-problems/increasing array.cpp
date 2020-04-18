#include<iostream>
using namespace std;
int main(){
    long ans=0;
    long input;
    cin>>input;
    long array[input];
    for (long i=0;i<input;i++){
        cin>>array[i];
    } 
    for (long i2=1;i2<input;i2++){
        while(array[i2]<array[i2-1]){
            array[i2]++;        
            ans++;
            }
    }
    cout<<ans;
}