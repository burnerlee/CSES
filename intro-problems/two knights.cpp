#include<iostream>
using namespace std;
int main(){
    long value;
    cin>>value;

    for(long input=1;input<value+1;input++){
        if(input==2){
            cout<<6<<"\n";
            continue;
        }
        if(input==3){
            cout<<28<<"\n";
            continue;
        }
    long ans=0;
    long max_row_score=0;
    long min_row_score=0;
    long rows=input;
    if(rows-4>0){
        max_row_score+=(rows-4)*4;
        min_row_score+=(rows-4)*2;
        rows=4;
    }
    if(rows==4)
        max_row_score+=10;
    if(rows==3)
        max_row_score+=7;
    if(rows==2)
        max_row_score+=4;
    if(rows==1)
        max_row_score+=2;
    min_row_score+=rows;
    if(input-2>0){
        ans+=max_row_score*(input-2);
    }
    if(input>1){
        ans+=min_row_score;
    }

    long finalans=input*(input);
    finalans*=(finalans-1);
    finalans/=2;
    finalans-=ans;
    cout<<finalans<<"\n";
    }
    return 0;
}