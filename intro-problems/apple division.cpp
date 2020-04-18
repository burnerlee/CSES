#include<iostream>
#include<vector>
using namespace std;
vector<long>::iterator it;
long checksum(vector<long> array,long sum,long min){
    if(array.size()==0){
            return min;
        }
    long value,index;
    for(long i=0;i<array.size();i++){
        value=array[i];
        sum-=value;
        if(sum==0){
           
            return 0;
        }
        if(sum<0){
            sum+=value;
            if(sum<min){
                min=sum;
                cout<<"min value changed to "<<min<<"\n";
            continue;
            }
        }
        index=i;
        it = array.begin()+index; 
        array.erase(it);
        min=checksum(array,sum,min);
        sum+=value;
        it = array.insert(array.begin()+index,value);
    }
    return min;
}
int main(){
    int input;
    cin>>input;
    long value;
    vector<long> array;
    for(long i=0;i<input;i++){
        cin>>value;
        array.push_back(value);
    }
    long sum=0;
    for(long i=0;i<input;i++){
        sum+=array[i];
    }
    cout<<sum/2<<"\n";
    int inc=0;
    if(sum%2==0){
       inc= checksum(array,sum/2,sum/2);
      cout<<inc*2;
    }
    else{
     inc=checksum(array,int(sum/2),(sum/2));
        cout<<inc*2+1;
               
    }
    
    
}
