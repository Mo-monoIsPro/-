#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
  int arr[35],n,x,pos=-1;
  cout<<"Въведете n. ";
  cin>>n;
  cout<<"Въведете елементите на масива. ";
  for(int i=0;i<n;i++)cin>>arr[i];
  cout<<"Въведете x. ";
  cin>>x;
  for(int j=0;j<n;j++)
    if(arr[j]==x){
      pos=j;
      break;
    }
  if(pos!=-1)cout<<(pos+1)<<endl;
  else cout<<"No"<<endl;
  return 0;
}
