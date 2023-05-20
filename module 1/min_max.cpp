#include<bits/stdc++.h>
using namespace std;
int min_(int a,int b){
    if(a<b)
    return a;
    else
    return b;
}

int max_(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){

    int a,b;
    cin>>a>>b;
    //int result = min_(a,b);
    //int result2 = max_(a,b);
    int result = min(a,b);
    int result2 = max(a,b);
    cout<<result<<endl;
    cout<<result2<<endl;
 
  return 0;
}