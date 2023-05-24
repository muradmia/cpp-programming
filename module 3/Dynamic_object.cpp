#include<bits/stdc++.h>
using namespace std;
class student{
    public:
      char name[256];
      int cls;
      int roll;
      char section;

      void display(){
        cout<<"name: "<<name<<endl;
        cout<<"cls: "<<cls<<endl;
        cout<<"roll: "<<roll<<endl;
        cout<<"section: "<<section<<endl;
      }
};
int main(){

    student *mu = new student;
    char na[100] = "Murad";
    strcpy(mu->name, na);
    mu->cls = 12;
    mu->roll = 1;
    mu->section = 'A'; 

    mu->display();
  return 0;
}