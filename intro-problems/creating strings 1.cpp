#include <bits/stdc++.h> 
#include<algorithm>
#include<vector>
using namespace std; 

vector<string> result;
vector<string>::iterator ip; 
// Function to print permutations of string  
// This function takes three parameters:  
// 1. String  
// 2. Starting index of the string  
// 3. Ending index of the string.  
void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        result.push_back(a); 
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
  
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
// Driver Code  
int main()  
{  
    string str;
    cin>>str;  
    int n = str.size();
    permute(str, 0, n-1);  
    std::sort(result.begin(), result.end()); 
    ip = std::unique(result.begin(), result.begin() + result.size()); 
    result.resize(std::distance(result.begin(), ip));   
    cout<<result.size()<<"\n";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"\n";
    }
}  