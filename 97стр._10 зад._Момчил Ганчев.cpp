#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main ()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
    cout<<"���� �������� ������ � ������� ������ ����� �� ������� �� ����������� ���������, ������ �� �� 5."<<endl;
    int m,n;
    cout<<"�������� ������� �������:";
    cin>>m;
    cout<<"�������� ������� �������:";
    cin>>n;
    cout<<"�������� �� 5 ����� ��:"<<endl;
    for (int a=m;a<=n; a++) {
        if (a%5==0){
            cout<<a<<",";

        }
    }

return 0;
}
