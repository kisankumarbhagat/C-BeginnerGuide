#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the Number:";
    cin>>number;
    switch(number){
        case 1:
         cout<<"You choosed 1";
         break;
        case 2:
         cout<<"You choosed 2";
         break;
        default:
         cout<<"You choosed another!"; 
         break;
    }
}