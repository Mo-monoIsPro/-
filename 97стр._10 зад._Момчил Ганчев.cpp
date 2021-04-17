#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main ()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
    cout<<"Тази програма намира и извежда всички числа от въведен от потребителя диапаозон, делящи се на 5."<<endl;
    int m,n;
    cout<<"Напишете долната граница:";
    cin>>m;
    cout<<"Напишете горната граница:";
    cin>>n;
    cout<<"Кратните на 5 числа са:"<<endl;
    for (int a=m;a<=n; a++) {
        if (a%5==0){
            cout<<a<<",";

        }
    }

return 0;
}
