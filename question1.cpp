#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit Occured!";
    }
    else if(sp==cp){
        cout<<"No Profit No Loss!";
    }else{
        cout<<"Loss Occured!";
    }
}