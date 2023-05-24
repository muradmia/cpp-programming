#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};

class display{
    public:
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<section<<endl;
        cout<<cls<<endl;
};
int main(){

    student b;
    char cpy[100];
    cin>>cpy;
    strcpy(b.name, cpy);
    cin>>b.roll;
    cin>>b.cls;
    cin>>b.section;
    b.display();
  return 0;
}