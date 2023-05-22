#include<bits/stdc++.h>
using namespace std;
int *get_array(int size){
    int *array = new int[size];
    for(int i = 0; i < size;i++){
        cin>>*(array+i);
    }
    
    return array;
}
int main(){

    int n;
    cin>>n;
    int *arr = get_array(n);

    for(int i = 0; i < n;i++){
        cout<<*(arr+i)<<" ";
    }
 
  return 0;
}