#include<iostream>
using namespace std;
class Reactangle{
 public:
   int l;
   int b;
   
   Reactangle(){  //Default Constructor --> No Arguments passed
    l=0;
    b=0;
    cout<<"This is Default Constructor."<<endl;;
   }

   Reactangle(int x, int y){  //Parameterized Constructor --> Arguments Passed
    l=x;
    b=y;
    cout<<"Hey! This is Parameterized Constructor."<<endl;;
   }
   Reactangle(Reactangle& r){  //Copy Constructor
    l = r.l;
    b = r.b;
   }
   ~Reactangle(){       // Destructor is denoted by ~class_name
     cout<<"Destructor is Called."<<endl;
   }
};
int main(){

    Reactangle* r1 = new Reactangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;      // delete keyword is used in destructor only!
    cout<<endl;
    Reactangle r2(3,4);
    cout<<endl;
    Reactangle r3 = r2;      // r2 ki value ek nye object r3 me aa jaayegi
    cout<<r3.l<<" "<<r3.b<<endl;
}