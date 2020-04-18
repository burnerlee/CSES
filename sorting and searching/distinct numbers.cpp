#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long input;
    cin>>input;
    vector<long>array;
    long value;  
    for(long i=0;i<input;i++){
        cin>>value;
        array.push_back(value);
    }
    sort(array.begin(),array.end());
    vector<long>::iterator it;
    it=std::unique(array.begin(),array.begin()+input);
    array.resize(std::distance(array.begin(),it));
    long ans=0;
    for (it = array.begin(); it != array.end(); ++it) { 
        ans++;
    } 
    cout<<ans;
}