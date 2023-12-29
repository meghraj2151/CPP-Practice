#include <iostream>
using namespace std;

int swapNumber(int &n, int &m){
  int temp = n;
  n = m;
  m = temp;
  return n;
}


int main()
{
  int num1, num2;
  cout << "Enter num1: ";
  cin >> num1;
  cout << "Enter num2: ";
  cin >> num2;

  cout << "Before swapping num1: " << num1 << " num2: " << num2 << endl;
  swapNumber(num1, num2);
  cout << "After swapping num1: " << num1 << " num2: " << num2 << endl;
}
