#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
  ("chcp 1251 > null");
  int n;
  double arr[10],sum=0;
  cout<<"Въведете n. ";
  cin>>n;
  cout<<"Въведете елементите на масива. ";
  for(int j=0;j<n;j++){
    cin>>arr [j];
    if(arr[j]<0)sum+=arr[j];
  }
  cout<<sum<<endl;
  return 0;
}
