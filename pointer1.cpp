#include<iostream> 
using namespace std; 
class Fruit{
  public:
    string name;
    string color;
    int weight;
};    

int main()  
{  
    Fruit *apple = new Fruit();  // Method-1 to making objects
    apple->name="Apple";
    apple->color="Red";
    apple->weight=2;
    cout<<apple->name<<" "<<apple->color<<" "<<apple->weight<<endl;


    Fruit mango; //Method-2 to making objects
    mango.name="Mango";
    mango.color="Yellow";
    mango.weight=4;
    cout<<mango.name<<" "<<mango.color<<" "<<mango.weight<<endl;
  return 0; 
}