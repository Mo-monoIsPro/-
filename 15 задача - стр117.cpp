#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
  int n,br=0;
  double arr[24],sum=0;
  cout<<"Въведете n. ";
  cin>>n;
    cout<<"Въведете елементите на масива. ";
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int j=0;j<n;j++){
    if(arr[j]>0){
      br++;
      sum+=arr[j];
    }
  }
  if(br!=0)cout<<(sum/br)<<endl;
  else cout<<0<<endl;
  return 0;
}
