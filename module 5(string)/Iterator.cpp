#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "hello";
    cout<<*(a.begin())<<endl;
    cout<<*(a.end());

    string:: iterator it;

    for(it = a.begin(); it != a.end();it++){
        cout<<*(it)<<endl;
    }
 
  return 0;
}