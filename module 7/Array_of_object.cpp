#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age;
    int cla;
};
int main(){

    student arr[3];

    for(int i=0; i<3; i++){
        getline(cin,arr[i].name);
        cin>>arr[i].age>>arr[i].cla;
        cin.ignore();
    }

    for(int i=0; i<3; i++){
        cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].cla<<endl;
    }

 
  return 0;
}