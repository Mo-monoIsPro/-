#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main ()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
    cout<<"Тази програма намира и извежда всички четирицифрени числа, които имат поне 2 равни цифри."<<endl;
    for(int a=1; a<=9; a++){
        for (int b=0; b<=9; b++){
            for (int c=0; c<=9; c++){
                for (int d=0; d<=9; d++){
                    if (a==b or a==c or a==d or b==c or b==d or c==d){
                        cout<<a*1000+b*100+c*10+d<<",";
                    }
                }
            }
        }
    }



    return 0;
}

