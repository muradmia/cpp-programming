#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[1001];
    int roll;
    int cls;
    char section;


    student(char *nam,int r,int c,char s){
        strcpy(name,nam);
        roll = r;
        cls = c;
        section = s;
    }

    void display(){
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<cls<<endl;
        cout<<section<<endl;
    }
};

student fun(){
    char name[1001] = "Murad";
    student murad(name,1,12,'A');
    return murad;
}
int main(){

    student murad = fun();
    murad.display();

    
  return 0;
}