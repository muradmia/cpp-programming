#include<bits/stdc++.h>
using namespace std;
int *arr(int size){
    int *arr1 = new int[size];
    for(int i = 0; i < 5; i++){
        cin>>*(arr1+i);
    }
    return arr1;
}
int main(){

    int *a = arr(5);
    

    for(int i = 0; i < 5; i++){
        cout<<*(a+i)<<" ";
    }
 
  return 0;
}