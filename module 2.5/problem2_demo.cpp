#include<bits/stdc++.h>
using namespace std;
int main(){

    int size,size2;
    cin>>size;
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cin>>size2;
    int *arr2 = new int[size2+size];
    for(int i=0;i<size2;i++){
        arr2[i] = arr[i];
    }
    for(int i=size;i<size2;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<size2;i++){
        cout<<*(arr2+i)<<" ";
    }

    delete[] arr;
 
  return 0;
}