#include <iostream>
#include <cmath>

using namespace std;

void bubbleSort(int num[], int n){
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - i - 1; j++){
      if(num[j] > num[j + 1]){
        int temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;
      }
    }
  }
}

void printNum(int num[], int n){
  for(int i = 0; i < n; i++){
    cout << num[i] << " ";
  }
  cout << endl;
}

int main()
{
  int num[] = {23, 65, 89, 98, 78};
  int n = sizeof(num) / sizeof(num[0]);

  cout << "Original Array: ";
  printNum(num, n);

  bubbleSort(num, n);

  cout << "Sorted Array: ";
  printNum(num, n);
}
