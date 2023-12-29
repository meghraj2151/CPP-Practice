#include <iostream>
using namespace std;

// #define pi  3.14

// int main(){
//   int r = 5;
//  // double pi = 3.14;
//   double area = pi * r * r;

//   cout << "Area is : " << area << endl;

//   return 0;

  
// }

// #define AREA(l, b) (l * b)

// int main(){
//   int l1 = 10, l2 = 5, area;

//   area = AREA(l1, l2);

//   cout << "Area of Rectangel is: " << area;
// }


// Multi Macros 
#define ELE 1, \
         2, \
         3, 

int main(){

  int arr[] = {ELE};

  printf("Elements of Aarray are:\n");

  for(int i = 0; i < 3; i++){
    cout << arr[i] << ' ';
  }

  return 0;
  
  }
