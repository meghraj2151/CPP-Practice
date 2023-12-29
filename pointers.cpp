#include <iostream>
using namespace std;

int main()
{
  /*
  int num = 5;

  cout << "Address of num is: " << &num << endl;
  cout << "Value of num is: " << num << endl;

  cout << endl << endl;

  int  *ptr = &num;

  cout << "Address is: " << ptr << endl;
  cout << "Value is: " << *ptr << endl;
  */

  
  // int num = 5;
  // int a = num;
  // cout << "a before: " << num << endl;
  // a++;
  // cout << "a after: " << num << endl;

  
  // int *p = &num;
  // cout << "before: " << num << endl;
  // (*p)++;
  // cout << "after: " << num << endl;

  // //Copying Pointer
  // int *q = p;
  // cout << p << " - " << q << endl;
  // cout << *p << " - " << *q << endl;

  // // Important Concept
  // int i = 3;
  // int *t = &i;
  // *t = *t + 1;
  // cout << *t << endl;
  // cout << "Before t: " << t << endl;
  // t = t + 1;
  // cout << "After t:" << t << endl;

  int arr[5] = {1,2,3,4,5};
  char ch[6] = "abcde";

  cout << &arr[0] << endl;
  cout << ch << endl;

  char *c = &ch[0];
  // prints entire string
  cout << c << endl;

  char temp = 'z';
  char *p = &temp;
  cout << p << endl;

  
  
}
