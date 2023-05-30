#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[26] = {0};
    for(int i=0; i<n; i++){
        char c;
        cin>>c;
        arr[c-'a']++;
    }
 
    for(char i = 'a';i <= 'z';i++){
        if(arr[i-'a'] > 0){
            for(int j = 0;j < arr[i-'a'];j++){
                cout<<i;
            }
        }
    }
  return 0;
}