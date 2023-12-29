
/*
// Accessing an Element of an Array
#include <iostream>
using namespace std;

int main()
{

  int arr1[3];

  arr1[0] = 10;
  arr1[1] = 20;
  arr1[2] = 30;

  cout << "arr1[0] = " << arr1[0] << endl;
  cout << "arr1[1] = " << arr1[1] << endl;
  cout << "arr1[2] = " << arr1[2] << endl;

  arr1[0] = 100;

  cout << "arr1[0] = " << arr1[0] << endl;

  return 0;
}
*/


/*
// Array transversal and size 
#include <iostream>
using namespace std;

int main()
{

  int num[10] = {10,20,30,40,50,60,70,80,90,100};

  for(int i = 0; i < 10; i++){
    cout << num[i] << " " ;
    
  }
  cout << endl <<endl;
  cout << "size of num[0]: " << sizeof(num[0]) << endl;
  cout << "size of num: " << sizeof(num) << endl;
  cout << "length of num: " << sizeof(num)/sizeof(num[0]) << endl;

  return 0;
  
}
*/


/*
//Relation between Arrays and Pointers
#include <iostream>
using namespace std;

int main()
{
  int num[5] = {10,20,30,40,50};

  int *ptr = num;
  
  cout << "addres using array: " <<&num << endl;
  cout << "addres using pointr: " <<ptr << endl;
}
*/


/*
// Printing array elements without using Indexing
#include <iostream>
using namespace std;

int main()
{
  int num[5] = {10,20,30,40,50};

  cout << *num << endl;
  cout << *(num+1) << endl;
  cout << *(num + 2) << endl;
  cout << *(num + 3) << endl;
  cout << *(num + 4) << endl;

  return 0;
}
*/


/*
// Pssing Arrays To Function
#include <iostream>
using namespace std;

void PrintSizedArray(int num[5], int n){
  for(int i= 0; i < n; i++){
    cout << num[i] << " ";
  }
  cout << endl;
}

void PrintUnsizedArray(int num[], int n){
  for(int i = 0; i < n; i++){
    cout << num[i] << " ";
  }
  cout << endl;
}

void PrintArrayPointer(int *ptr, int n){
  for(int i = 0; i < n; i++){
    cout << ptr[i] << " ";
  }
  cout << endl;
}

int main()
{

  int num[5] = {10,20,30,40,50};

  PrintSizedArray(num, 5);
  PrintUnsizedArray(num, 5);
  PrintArrayPointer(num, 5);

}
*/


/*
// Multidimensional Arrays
// (1) 2D
#include <iostream>
using namespace std;

int main(){

  int num[4][4];

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      num[i][j] = i + j;
    }
  }
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      cout << num[i][j] << " ";
    }
    cout << endl;
  }
}
*/

/*
// 3 Dimensional Arrays
#include <iostream>
using namespace std;

int main()
{

  int num[5][5][5];

  for(int i = 0; i < 5; i++ ){
    for(int j = 0; j < 5; j++){
      for(int k = 0; k < 5; k++){
        num[i][j][k] = i + j + k;
      }
    }
  }
  for(int i = 0; i < 5; i ++){
    cout << i << " st Layer" << endl;
    for(int j = 0; j < 5; j++){
      for(int k = 0; k < 5; k++){
        cout << num[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
}
*/

