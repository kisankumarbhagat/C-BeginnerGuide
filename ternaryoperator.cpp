#include <iostream>
#include <string>
using namespace std;

int main() {
  double marks;
  cout << "Enter your marks: ";
  cin >> marks;
  
  string result = (marks >= 40) ? "passed" : "failed";

  cout << "You " << result << " the exam.";

  return 0;
}