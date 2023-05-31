#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count[26]= {0};
    for(int i=0; i<n; i++){
        char c;
        cin>>c;
        count[c-'a']++;
    }


    for(char c = 'a' ;c <= 'z';c++){
        if(count[c-'a'] > 0){
            for(int j = 0;j < count[c-'a'];j++){
                cout<<c;
            }
        }
    }
  return 0;
}