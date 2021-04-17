#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
  int n,pr=1,arr[39],dali=0;
  cout<<"Въведете n. ";
  cin>>n;
  cout<<"Въведете елементите на масива. ";
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int j=0;j<n;j++)
    if(arr[j]%7==0){
      pr*=arr[j];
      dali=1;
    }
  if(dali)cout<<pr<<endl;
  else cout<<"No"<<endl;
  return 0;
}
