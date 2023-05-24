#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[1001];
    int roll;
    int cls;
    char section;

    /*student(char n[1001],int r,int c,char s){
        strcpy(name,n);
        roll = r;
        cls = c;
        section = s;
    }*/

    void display(){
        cout<<"name :"<<name<<endl;
        cout<<"Roll  :"<<roll<<endl;
        cout<<"Section :"<<section<<endl;
        cout<<"CLass :"<<cls<<endl;
    }
};

/*string fun(){
    char name[1001] = "murad";
    student *murad = new student(name,2,12,'A');
    return murad;
}*/
int main(){

    student * mu = new student; 
    mu->roll = 20;

    cout<<mu->roll<<endl;
    
    
  return 0;
}