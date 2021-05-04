#include <iostream>
using namespace std;
int main () {
int chislo;
cout<<"Enter a year :";
cin>>chislo;
if (chislo%4==0){
    if (chislo%100==0){
        if (chislo%400==0){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
return 0;
}
