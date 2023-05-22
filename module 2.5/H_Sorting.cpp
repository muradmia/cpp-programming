#include<bits/stdc++.h>
using namespace std;
int *swap(int size){
    int *arr = new int[size];
    for(int i = 0; i < size;i++){
        cin>>*(arr+i);
    }

    for(int i = 0; i < size;i++){
        for(int j = i+1; j < size;j++){
            if(arr[i] >= arr[j]){
                swap(*(arr+i),*(arr+j));
            }
        }
    }
    return arr;
}
int main(){

    
    int size;
    cin>>size;
    int *result = swap(size);

    for(int i = 0; i < size;i++){
        cout<<*(result+i)<<" ";
    }


    
  return 0;
}