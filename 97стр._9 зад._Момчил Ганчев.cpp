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
    cout<<"Тази програма намира и извежда всички трицифрени числа със сбор на цифрите равен на въведеното от потребителя число. Напишете числото, на кеото да е равен сборът от цифрите на трицифрените числа:";
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
