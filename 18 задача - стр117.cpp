#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
  cout<<"Въведете n. ";
  int n;
  double arr[15];
  double max,min;
  cin>>n;
  cout<<"Въведете елементите на масива. ";
  for(int i=0;i<n;i++)cin>>arr[i];
  max=arr[0];
  min=arr[0];
  for(int j=1;j<n;j++){
    if(arr[j]>max)max=arr[j];
    if(arr[j]<min)min=arr[j];
  }
  cout<<(max*min)<<" ";
  cout<<(max-min)<<endl;
  return 0;
}
