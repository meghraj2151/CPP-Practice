#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector <int> v;
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(1);
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(2);
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(3) ;
  cout << "Capacity: " << v.capacity() << endl;
  cout << "Size: " << v.size() << endl;

  cout << endl << "Element at 2 index: "<<v.at(2) << endl;

  cout << "Front: " <<v.front() << endl;
  cout << "Back: " << v.back() << endl;

  cout << "Before pop: " << endl;
  for(int i:v){
    cout << i << " ";
  }cout << endl;

  v.pop_back();

  cout << "After pop: " << endl;
  for(int i:v){
    cout << i << " ";
  }cout << endl;

  cout << "Before Clear Size: " << v.size() <<endl;

  v.clear();

  cout << "After Clear Size: " << v.size() <<endl;
}
