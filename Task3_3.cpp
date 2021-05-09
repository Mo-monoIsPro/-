#include<iostream>
using namespace std;
int main ()
{
    int lines;
    cout<<"Vuvedete kolko shte sa Vi redovete: ";
    cin>>lines;
    for (int i=lines; i>=1; i--){//za broq na redovete
        for (int q=lines-1; q>=i; q--){ //za rastoqnieto v nachaloto za da ima prav ugul
            cout<<"  ";
        }
        for (int z=1; z<=i; z++){ //za dilzinata na redovete
        cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
