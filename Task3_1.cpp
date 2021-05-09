#include<iostream>
using namespace std;
int main ()
{
    double tsena=10000;
    int godina=2021;
    for (int i=godina;i<=godina+10;i++){
        cout<<"Tsena na godina "<<i<<" e ravna na "<<tsena<<" dolara.\n";
        tsena=tsena*106/100;
    }
    double tsena2=tsena;
    double broqch_na_pari=0;
    for (int q=1; q<=4; q++){
        tsena2=tsena2*106/100;
        broqch_na_pari=broqch_na_pari+tsena2;

    }
    cout<<"Obshtata suma za obuchenie sled 10-ta godina za 4 godini e "<<broqch_na_pari<<".\n";
    return 0;
}
