#include<iostream>
#include<cmath>
#include<windows.h>
#include<string>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
    cout<<"Тази програма намира и извежда всички трицифрени числа, които се делят на всяка своя цифра."<<endl;
    long long a,b,c;
    for (a=1; a<=9; a++) {
        for (b=1; b<=9; b++){
            for (c=1; c<=9; c++){
                if ((a*100+b*10+c)%a==0 and (a*100+b*10+c)%b==0 and (a*100+b*10+c)%c==0){
                    cout<<a*100+b*10+c<<",";
                }
            }
        }
    }
    return 0;
}
