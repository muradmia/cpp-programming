#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    int count = 0;
    getline(cin, s);
    stringstream ss(s);
    string word;

    while(ss >> word){
        cout<<word<<endl;
        count++;
    }

    cout<<count<<endl;

 
  return 0;
}