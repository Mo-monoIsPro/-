#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
    int a;
    cout<<"���� �������� ������ � ������� ������ ���������� ����� ��� ���� �� ������� ����� �� ���������� �� ����������� �����. �������� �������, �� ����� �� � ����� ������ �� ������� �� ������������ �����:";
    cin>>a;
    for (int b=1; b<=9; b++){
        for (int c=0; c<=9; c++){
            for (int d=0; d<=9; d++) {
                if (b+c+d==a) {
                    cout<<b*100+c*10+d<<",";
                }
            }
        }
    }


    return 0;
}
