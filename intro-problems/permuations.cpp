#include<iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    if(input==1){
        cout<<"1";
        return 0;
    }
    if(input<4){
        cout <<"NO SOLUTION";
        return 0;
    }
    if(input==5){
        cout<<"4 2 5 3 1";
        return 0;
    }
    
    int array[input];
    if(input%2==0){
        int value=input/2;
        array[0]=value;
        array[input-1]=value+1;
        for(int i=1;i<input/2;i++){
            if(i%2==0){
            array[i]=i;
            array[input-i-1]=input-i+1;
            }
            else{
            array[i]=input-i+1;
            array[input-i-1]=i;
            }
        }
    }
    else{
      int value=(input-1)/2;
        array[0]=value;
        array[input-1]=value+1;
        for(int i=1;i<(input-1)/2;i++){
            if(i%2==0){
            array[i]=i;
            array[input-i-1]=input-i;
            }
            else{
            array[i]=input-i;
            array[input-i-1]=i;
            }
        }
        array[value]=input;
    }
    for(int t=0;t<input;t++){
        cout<<array[t]<<" ";
    }
}