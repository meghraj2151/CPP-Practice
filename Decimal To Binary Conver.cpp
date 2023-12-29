/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int ans = 0;
  int i = 0;

  while(n!=0)
    {
      int bit = n & 1;

      ans = (bit * pow(10,i)) + ans;
      n = n >> 1;
      i++;
    }
  cout << "Answer is " << ans << endl;
}
*/


/*
//Covert -ve decimal to binary 
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number : " << endl;
  cin >> n;
  
  bitset<4> binaryNumber(n);

  cout << "Binary Number : " << binaryNumber << endl;

  return 0;


}
*/

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  bitset<32> decimalNumber(n);
  cout << decimalNumber << endl;
}

