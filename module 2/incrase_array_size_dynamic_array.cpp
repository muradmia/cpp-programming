#include<bits/stdc++.h>
using namespace std;
int main(){

    int *arr = new int[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
   
    int *arr1 = new int[7];
    for(int i=0; i<7; i++){
        arr1[i] = arr[i];
    }
    arr1[5] = 6;
    arr1[6] = 7;


    for(int i=0; i<7; i++){
        cout<<arr1[i]<<" ";
    }
    delete[] arr;

    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}