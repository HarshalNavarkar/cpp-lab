#include <iostream>
using namespace std;
// Drive code
int main() 
{
  char op;
  float num1 , num2;
  // it allows user to enter operator
  // i.e. +,-,*,/
  cin >> op;
  // it allows user to enter the operands
  cin >> num1 >> num2;
  //Switch statement begins
  switch (op) {
    //if user enter +
    case '+':
    cout << num1 + num2;
    break;
    // if user enter -
    case '-':
    cout << num1 - num2;
    break;
    // if user enter *
    case '*':
    cout << num1 * num2;
    break;
    //if user enter /
    case '/':
    cout << num1 / num2;
    // if the operator is other than +,-,* or/,
    // error message will display
    default:
    cout << "Error! operator is not correct";
  }
  // switch statement operands
  return 0;
}
  
  
