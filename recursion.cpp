#include <iostream>
using namespace std;

// int factorial(int n){

//   if(n == 0){
//     return 1;
//   }
//   else{
//     return n * factorial(n-1);
//   }
// }

// int main(){

//   int n;
//   cin >> n;

//   int ans = factorial(n);

//   cout << ans << endl;

//   return 0;
// }

// 2 Power
// int power(int n){
//   if( n==0){
//     return 1; 
//   }
//   else{
//     return 2 * power(n-1);
//   }
// }

// int main(){
//   int n;
//   cin >> n;

//   int ans = power(n);

//   cout << ans << endl;
// }

// Print Counting
void print(int n){
  if(n == 0){
    return ;
  }
  else{
    print(n-1);
    cout << n << endl;
    //print(n-1); -> 5 4 3 2 1
 }
}

int main(){
  int n = 10;
  //cin >> n;
  cout << endl;
  print(n);

  return 0;
 
}
