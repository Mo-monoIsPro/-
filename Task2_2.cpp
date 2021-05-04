#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int chislo;
    cout<<"nozitsa (0), kamuk (1), hartiq (2)\nTi izbirash: ";
    cin>>chislo;
    srand(time(0));
    int num = rand() % 3;
    cout<<"Komputara izbra "<<num<<endl;
    if (num==0){
        if (chislo==0){
            cout<<"Ravni! \n";
        }
        else if (chislo==1){
            cout<<"Pechelish! \n";
        }
        else if (chislo==2){
            cout<<"Gubish! \n";
        }
    }
    else if (num==1){
        if (chislo==0){
            cout<<"Gubish! \n";
        }
        else if (chislo==1){
            cout<<"Ravni! \n";
        }
        else if (chislo==2){
            cout<<"Pechelish! \n";
        }
    }
    else if (num==2){
        if (chislo==0){
            cout<<"Pechelish! \n";
        }
        else if (chislo==1){
            cout<<"Gubish! \n";
        }
        else if (chislo==2){
            cout<<"Ravni! \n";
        }
    }
    return 0;
}
