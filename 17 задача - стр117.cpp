#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
  int n,max,ind,arr[100];
  cout<<"Въведете n. ";
  cin>>n;
  cout<<"Въведете елементите на масива.";
  for(int i=0;i<n;i++)cin>>arr[i];
  max=arr[0];
  ind=0;
  for(int j=1;j<n;j++)
    if(arr[j]>max){
      max=arr[j];
      ind=j;
    }
  cout<<max<<" "<<ind<<endl;
  return 0;
}
