#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   ("chcp 1251 > null");
  int n,arr[29],br=0;
  cout<<"Въведете n. ";
  cin>>n;
  cout<<"Въведете елементите на масива. ";
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int j=0;j<n;j++)
    if(arr[j]%2==0)br++;
  cout<<br<<endl;
  return 0;
}
