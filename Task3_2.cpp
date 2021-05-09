#include <iostream>
using namespace std;
int main () {
int lines;
cout<<"Kazete kolko shte Vi sa redovete: ";
cin>>lines;
for (int i=1; i<=lines; i++){
    for (int q=lines-i+1; q>=1; q--){ //lines-i+1 e zashtoto chislata sa v obraten red, a i pochva ot 1 no ne iskam da go promenqm zatova vadq 1;
        cout<<q<<" ";
    }
    for (int q=2; q<=lines-i+1; q++){ //lines-i+1 e zashtoto chislata sa v obraten red, a i pochva ot 1 no ne iskam da go promenqm zatova vadq 1;
        cout<<q<<" ";
    }
    cout<<"\n";
}
return 0;
}
