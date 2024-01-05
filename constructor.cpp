#include<iostream>
using namespace std;
class Reactangle{
 public:
   int l;
   int b;
   
   Reactangle(){  //Default Constructor --> No Arguments passed
    l=0;
    b=0;
    cout<<"This is Default Constructor.";
   }

   Reactangle(int x, int y){  //Parameterized Constructor --> Arguments Passed
    l=x;
    b=y;
    cout<<"Hey! This is Parameterized Constructor.";
   }
   Reactangle(Reactangle& r){  //Copy Constructor
    l = r.l;
    b = r.b;
   }
};
int main(){

    Reactangle r1;
    cout<<endl;
    Reactangle r2(3,4);
    cout<<endl;
    Reactangle r3 = r2;      // r2 ki value ek nye object r3 me aa jaayegi
}