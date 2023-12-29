#include <iostream>
using namespace std;

int reverseNumber(int n){
  int sum = 0;
  while(n != 0){
    
  sum = sum * 10;
  sum = sum + n % 10;
  n /= 10;
  }
  return sum;
}

int main()
{
  int n;
  cout << "Enter Number: ";
  cin >> n;

    cout << "Reversed Number Is: " << reverseNumber(n);
    
}
