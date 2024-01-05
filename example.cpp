#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"Three digit number!";
    }else{
        cout<<"Number is not containing three digits";
    }
}