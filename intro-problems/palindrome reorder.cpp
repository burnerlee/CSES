#include <iostream>
using namespace std;
int main(){
    string input;
    bool extra=false;
    bool fail;
    char middle;
    int b;
    cin>>input;
    hi:
    for(long i=0;i<long(input.length()/2);i++){
        if(input[i]==input[input.length()-i-1])
        continue;
        fail=true;
        for(long t=i+1;t<input.length()-i-1;t++){
            if(input[t]==input[i]){
                char temp=input[input.length()-i-1];
                input[input.length()-i-1]=input[t];
                input[t]=temp;
                fail=false;
                break;
            }
            
        
        }
        middle=input[i];
        if(input.length()%2==0){
            if(fail)
            goto fail;
        }
        else{
            if(fail){
            if(extra)goto fail;
            else{
                extra=true;
                char a=input[(input.length()-1)/2];
                input[(input.length()-1)/2]=middle;
                input[i]=a;
                goto hi;
            }
            }
        }

    }
    cout<<input;
    return 0;
    fail:
    cout<<"NO SOLUTION";
    return 0;
}
