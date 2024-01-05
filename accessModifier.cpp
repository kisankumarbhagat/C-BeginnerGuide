#include<iostream>
using namespace std;
class Parents{
    public:
      int x;

    protected:
      int y;

    private:
      int z;

};

class Child1 : public Parents{           // class Child1 inheriting class Parents  Publicly
      // x will remain public
      // y will remain protected
      // z will not be accessable

};

class Child2 : protected Parents{      // class Child1 inheriting class Parents  Protectedly
      //x will be protected
      //y will be protected
      //z will be inaccessible

};

class Child3 : private Parents{        // class Child1 inheriting class Parents  Privately
    //x will be private
    //y will be private 
    //z will be inaccessible

};
int main(){
    Parents p;
    p.x;

    return 0;
}