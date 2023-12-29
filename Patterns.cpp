
#include <iostream>
using namespace std;

int main ()
{
  int n;
  cin >> n;

  int i = 1;

  while(i<=n){
    int j = 1;
    while(j<=n){
      cout << "*";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}


/*
#include <iostream>
using namespace std;

int main ()
{
  int n;
  cin >> n;

  int i = 1;
  int count = 1;

  while(i<=n){
    int j = 1;
    while(j<=n){
      cout << count << " ";
      count = count + 1;
      j = j +1;
    }
    cout << endl;
    i = i +1;
  }
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=i){
      cout << i << " "; // cout << "*" << " ";
      j = j + 1; 
    }
    cout << endl;
    i = i+1;
  }
}
*/

/*
#include <iostream>
using namespace std;

int main ()
{
  int n;
  cin >> n;

  int count = 1;
  int i = 1;
  while(i<=n)
    {
      int j = 1;
      while(j<=i)
        {
          cout << count << " ";
          j = j + 1;
          count = count + 1;
        }
      cout << endl;
      i = i + 1;
    }
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
  int  n;
  cin >> n;

  int i = 1;
  while(i<=n){
    int j = 1;
    int value = i;
    while(j<=i){
      cout << value << " ";
      j = j + 1;
      value = value + 1;
    }
    cout << endl;
    i = i + 1;
  }
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
      char ch = 'A' + j - 1; // ch = 'A' + i - 1;
      cout << ch;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}
*/

/*
//12
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
      char ch = 'A' + i + j - 2;
      cout << ch << " ";
      ch++;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}
*/

/*
//15
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while(i<=n)
    {
      int j = 1;
      while(j<=i)
        {
          char ch = 'A' + i + j - 2;
          cout << ch << " ";
          ch++;
          j = j + 1;
        }
      cout << endl;
      i = i + 1;
    }
  
}
*/


/*
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=i){
      char ch = 'A' + n - j;
      cout << ch << " ";
      ch = ch + 1;
      j = j + 1;
    }
    cout << endl;
    i = i +1;
  }
}
*/


/*
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while(i<=n){
    int space = n - i;
    while(space)
      {
        cout << " ";
        space = space - 1;
      }
    int j = 1;
    while(j<=i){
      cout <<"*";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}
*/

