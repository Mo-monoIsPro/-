#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
  ("chcp 1251 > null");
  int arr[10],n,x,flag=0;
  cout<<"Въведете n. ";
  cin>>n;
  cout<<"Въведете елементите на масива. ";
  for(int i=0;i<n;i++)cin>>arr[i];
  cout<<"Въведете x. ";
  cin>>x;
  for(int j=0;j<n;j++)
    if(arr[j]==x){
      flag=1;
      break;
    }
  if(flag)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
