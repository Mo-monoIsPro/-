#include<windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
  int n;
  double arr[125],max,min;
  int Max,Min;
  cout<<"Въведете n. ";
  cin>>n;
  cout<<"Въведете елементите на масива. ";
  for(int i=0;i<n;i++)cin>>arr[i];
  max=arr[0];
  min=arr[0];
  Max=0;
  Min=0;
  for(int j=1;j<n;j++){
    if(arr[j]>max){max=arr[j];Max=j;}
    if(arr[j]<min){min=arr[j];Min=j;}
  }
  double swap;
  swap=arr[Max];
  arr[Max]=arr[Min];
  arr[Min]=swap;
  for(int k=0;k<n;k++)cout<<arr[k]<<" ";
  return 0;
}
