#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[1001];
    int roll;
    int cls;
    int section;

    student(int rol,char sec,int cl,char *nam){
        roll = rol;
        section = sec;
        cls = cl;
        strcpy(name,nam);
    }
    void display(){
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<cls<<endl;
        cout<<section<<endl;
    }
};

void display(){
    
}
int main(){

    student murad(10,'A',12,"Murad"); 
    murad.display();
   

  return 0;
}