

#include <iostream>
#include<algorithm>
using namespace std;

int binarySearch(int array[], int x, int s, int e) {
  while (s <= e) {
    int mid = (s+e)/2;
    if (array[mid] == x)
      return mid;
    if (array[mid] < x)
      s = mid + 1;
    else
      e = mid - 1;
  }
  return -1;
}

int main() {
  int n;
  cout<<"Enter the number of elements : "<<endl;
  cin>>n;
  int a,l[n];
  cout<<"Enter the elements : "<<endl;
  for(int i=0;i<n;i++){
      cin>>l[i];
  }
  cout<<"Enter the element you want to find : "<<endl;
  cin>>a;
  sort(l, l+n);
  int result = binarySearch(l, a, 0, n - 1);
  if (result == -1)
    cout<<"Element not found";
  else
    cout<<"Element is found at index : "<<result;
    
  return 0;
}
