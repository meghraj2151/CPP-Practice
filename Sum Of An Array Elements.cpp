#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Number of Array Elements: ";
  cin >> n;

  int num[n];

  for(int i = 0; i < n; i++){
    cout << "Enter Elements: " << i + 1 <<": ";
    cin >> num[i];
  }
  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += num[i];
  }
  cout << endl <<"Sum of all arrays elements is: " <<sum << endl;
}
