#include<iostream>
using namespace std;

class Complex{
public:

   int real;
    int img;

    Complex(int x,int y){
        real = x;
        img = y;
    }
    
    Complex operator+ (Complex &c){    //operator+ is written because '+' operator is used to be Overload
        Complex ans(0,0);
        ans.real = real + c.real;      //Complex(Complex &Object_of_Complex_Class)
        ans.img = img + c.img;
        return ans;
    }
};

int main(){

    Complex c1(1,2);
    Complex c2(4,6);

    Complex c3 = c1 + c2;          
    cout<<c3.real<<" i"<<c3.img<<endl;
}