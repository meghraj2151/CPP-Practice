#include <iostream>
using namespace std;

//Palidrome
bool isPalindrome(char a[], int n){
  int s = 0;
  int e = n -1;

  while(s <=e){
    if(a[s] != a[e]){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
}

// Lenght of String
int getLenght(char name[]){
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++){
    count++;
  }
  return count;
}

// reverse string
void reverse(char name[], int n){
  int s = 0;
  int e = n -1;

  while(s < e){
    swap(name[s++], name[e--]);
  }
}

int main(){

  char name[20];
  cout << "Enter your naame " << endl;

  cin >> name;

  cout << "Your name is ";
  cout << name << endl;
  int len = getLenght(name);

  cout << "Lenght : " << getLenght(name) << endl;

  reverse(name , len);
  cout << "Your name is aafter reversed ";
  cout << name << endl;

  cout << "Palidrome or not " << isPalindrome(name, len) << endl;


  return 0;     
  
}
