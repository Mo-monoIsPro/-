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
    cout<<"Тази програма програма степенува въведеното от потребителя число с въведено от потребителя друго число."<<endl;
    int b,m;
    cout<<"Напиши колко е основата:";
    cin>>b;
    cout<<"Напиши колко е степента:";
    cin>>m;
    cout<<"Отговорът е:";
    cout<<power (b,m);
    return 0;
}
