#include<bits/stdc++.h>
using namespace std;
int *max1(int size){
    
    int result;
    int *arr = new int[size];
    for(int i = 0; i < size;i++){
        cin>>*(arr+i);
    }

    for(int i = 0; i < size;i++){
        for(int j = i+1; j < size;j++){
            result = max(*(arr+i),*(arr+j));
        }
    }
    return arr;
}
int main(){

    int size;
    cin>>size;
    int *res = max1(size);
    int result = *(res+0);
    for(int i = 0; i < size;i++){
        for(int j = i+1; j < size;j++){
            result = max(result,*(res+j));
        }
    }
    cout<<result<<endl;
  return 0;
}