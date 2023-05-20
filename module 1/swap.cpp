#include<bits/stdc++.h>
using namespace std;

void swap_(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){

    int a,b;
    cin>>a>>b;
    //swap_(&a,&b);
    swap(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;

  return 0;
}