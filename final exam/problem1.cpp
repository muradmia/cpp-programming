#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    while(n--){
      string s;
      string x;

      cin>>s>>x;
      int e = x.size();
      while(s.find(x) != -1){
        s.replace(s.find(x),e,"$");
      }
      cout<<s<<endl;
    }
 
  return 0;
}