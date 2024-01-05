#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n%3==0 and n%5==0){
        cout<<"Divisible";
    }else{
        cout<<"Not Divisible!";
    }
}