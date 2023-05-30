#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int mark;
    int age;
};
int main(){

    student input[3];

    for(int i=0; i<3; i++){
        getline(cin, input[i].name);
        cin>>input[i].mark>>input[i].age;
        cin.ignore();
    }

    student mx;
    mx.mark = INT_MIN;

    for(int i=0; i<3; i++){
        if(input[i].mark > mx.mark){
            mx = input[i];
        }
    }

    cout<<mx.name<<" "<<mx.mark<<" "<<mx.age<<endl;
    student mn;
    mn.mark = INT_MAX;

    for(int i=0; i<3; i++){
        if(input[i].mark < mn.mark){
            mn = input[i];
        }
    }

 cout<<mn.name<<" "<<mn.mark<<" "<<mn.age<<endl;
  return 0;
}