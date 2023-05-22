#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,max,min;
    cin>>a>>b>>c;

    if(a >= b && a >= c){
        max = a;
    }else if(b >= c && b >= a){
        max = b;
    }else{
        max = c;
    }

    if(a <= b && a <= c){
        min = a;
    }else if(b <= c && b <= a){
        min = b;
    }else{
        min = c;
    }

    cout<<min<<" "<<max<<endl;
 
  return 0;
}