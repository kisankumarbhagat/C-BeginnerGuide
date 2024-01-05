#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"Area is Greater!";
    }
    else if(area<perimeter){
        cout<<"Perimeter is Greater!";
    }else{
        cout<<"Both are same";
    }
}