#include<iostream>
using namespace std;
int main(){
    int var = 20;
    int* ptr =  &var;

    cout<<var<<endl;  //20
    cout<<ptr<<endl;  //0x61ff08
    cout<<*ptr<<endl; //20
}