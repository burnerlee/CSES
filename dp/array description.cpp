#include <iostream>
#include <vector>
using namespace std;
void arrange(vector<int>array,int start){
    for(int i=start;i<array.size();i++){
        if(array[i]==0){
            if(i==0){
                array[0]=array[1];
                arrange(array,1);
                array[0]=array[1]+1;
                arrange(array,1);
                array[0]=array[1]-1;
                arrange(array,1);
            }
            else{

            }
        }
    }
}
int main(){
    int n,m;
    cin>> n>>m;
    vector<int>array(n);
    for(int&v: array) cin>>v;
    arrange(array,0)

}