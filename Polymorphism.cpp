#include <iostream>
using namespace std;

class A{
	public:
	void sayHello(){
		cout << "Hello Mehraj" << endl;
	}
	void sayHello(string name){
		cout << "Hello";
	}
};

int main(){
	A obj;
	obj.sayHello();
	
	
	return 0;
}
