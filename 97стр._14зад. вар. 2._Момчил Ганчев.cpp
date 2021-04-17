#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
bool prostoChislo(long long n){
    bool dali;
    if(n==1){
        dali=false;
    }
    else{
        if(n==2||n==3){
        dali=true;
        }
        else{
            for(long long i=2;i<=sqrt(n);i++){
                dali=true;
                if(n%i==0){
                dali=false;
                break;
                }
            }
        }
    }
    return dali;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout<<"Тази програма намира всички трицифрени числа, които имат сбор на цифрите просто число."<<endl;
    for(int a=1; a<=9; a++){
        for (int b=0; b<=9; b++){
            for (int c=0; c<=9; c++){
                    for (int d=1; d<=(a+b+c)/2; d++){
                            long long N=a+b+c;
                    if (prostoChislo (N)==1){
                        cout<<a*100+b*10+c<<", ";
                        break;
                    }
            }
        }
    }
}
    return 0;
}
