#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
  ("chcp 1251 > null");
  cout<<"Въведете броят на символите. ";
  int k,br=0;
  cin>>k;
  cout<<"Въведете елементите на масива. ";
  char s[100];
  for(int i=0;i<k;i++)cin>>s[i];
  for(int j=0;j<k;j++)
    if(s[j]=='a')br++;
  cout<<br<<endl;
  return 0;
}

