#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key){
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s)/2;
  int ans = -1;

  while(s <= e){
    if(arr[mid] == key){
      ans = mid;
      e = mid - 1;
    }
    else if(key > arr[mid]){
      s = mid + 1;
    }
    else if(key < arr[mid]){
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}

int lastOccurrence (int arr[], int n, int key){
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s)/2;
  int ans = -1;

  while(s <= e){
    if(arr[mid] == key){
      ans = mid;
      s = mid + 1;
    }
    else if(key > arr[mid]){
      s = mid + 1;
    }
    else if(key < arr[mid]){
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}




int main()
{
  int even[5] = {1,2,3,3,3};

  cout << "First Occurrence of 3 is at index " << firstOccurance(even,  5, 3) 
 << endl;
  cout << "Last Occurrence of 3 is at index " << lastOccurrence(even,  5, 3) 
 << endl;

  int sum = lastOccurrence(even, 5, 3) - firstOccurance(even, 5, 3) + 1;
  cout << "Total Number of Occurrences: " << sum;
}
