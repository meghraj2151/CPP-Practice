#include <iostream>
using namespace std;

void update(int  **p){
 // p = p + 1;
  // Kuch change hoga - No

  *p = *p + 1;
  // Kuch change hoga - Yes

  //**p = **p + 1;
  // kuch change hoga - Yes
}

int main(){

  int i = 5;
  int *p = &i;
  int **p2 = &p;

  // cout << " i " << i << endl;
  // cout << "Printing P " << *p << endl;
  // cout << "Printing P2 " << **p2<< endl << endl;

  // cout << "Address of i " << &i << endl;
  // cout << "Address of P " << p << endl;

  cout << endl << endl;
  cout << "before " << i << endl;
  cout << "before " << p << endl;
  cout << "before " << p2 << endl;

  update(p2);
  cout << "After " << i <<endl;
  cout << "After " << p << endl;
  cout << "After " << p2 << endl;
  cout << endl << endl;
  
  
}
