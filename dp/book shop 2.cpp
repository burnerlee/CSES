#include <iostream>
using namespace std;
int dp(int i,int j,int* pages,int* prices,int* store){
    int value1,value2,price,page;
    price=*(prices+j-1);
    page=*(pages+j-1);
    if(j==0){
        return 0;
    }
    if(*(*(store+i)+j)<0){
    if(i<price){
        if(*(*(store+i)+j-1)<0){
        *(*(store+i)+j-1)= dp(i,j-1,pages,prices,store);
        return *(*(store+i)+j-1);
        } 
        else{
            return *(*(store+i)+j-1);
        }
        
    }
        if(*(*(store+i-price)+j-1)<0){
        value1=dp(i-price,j-1,pages,prices,store)+page;
        *((*store+i-price)+j-1)=value1;
        }
        else{
            value1= *((*store+i-price)+j-1);
        }
    
         if(*(*(store+i)+j-1)<0){
    value2=dp(i,j-1,pages,prices,store);
    *(*(store+i)+j-1)=value2;
        }
    
    else{
        value2=*(*(store+i)+j-1);
    }

    *(*(store+i)+j)=max(value1,value2);
    return *(*(store+i)+j);
    }

    else{
        return *(*(store+i)+j);
    }
}
int main() {
    int n,x;
    cin>>n>>x;
    int prices[n];
    int pages[n];
    for(int i=0;i<n;i++){
        cin >> prices[i];
    }
    for(int i=0;i<n;i++){
        cin>>pages[i];
    }
    int store[x+1][n+1];
    for(int i=0;i<=x;i++){
        for(int j=0;j<=n;j++){
            store[i][j]=-1;
        }
    }
    int ans = dp(x,n,pages,prices,&(store[0][0]));
    cout<<ans;
}