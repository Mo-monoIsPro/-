#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int power(int a, int n) {
      int res = 1;
      for ( ; n>0; n--) {
           res *= a;
      }
      return res;
}
int main ()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
    cout<<"���� �������� �������� ��������� ���������� �� ����������� ����� � �������� �� ����������� ����� �����."<<endl;
    int b,m;
    cout<<"������ ����� � ��������:";
    cin>>b;
    cout<<"������ ����� � ��������:";
    cin>>m;
    cout<<"��������� �:";
    cout<<power (b,m);
    return 0;
}
