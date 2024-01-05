#include<iostream>
using namespace std;
class Encaps{
   int x;
   public:
    void set(int n){
        x = n;
    }
    int get(){
        return x;
    }
};

int main(){
    Encaps obj;
    obj.set(3);
    cout<<obj.get()<<endl;
 
}