#include<bits/stdc++.h>
using namespace std;
class studnet{
    public:
    string name;
    int mark;
    int age;
};
int main(){

    studnet s[3];

    for(int i=0; i<3; i++){
        getline(cin,s[i].name);
        cin>>s[i].mark;
        cin>>s[i].age;
        cin.ignore();
    }

    for(int i=0; i<3; i++){
        for(int j = i+1; j<3; j++){
            if(s[i].age > s[j].age){
                swap(s[i],s[j]);
            }
        }
    }

    for(int i=0; i<3; i++){
        cout<<s[i].name<<" ";
        cout<<s[i].mark<<" ";
        cout<<s[i].age<<endl;
    }
 
  return 0;
}