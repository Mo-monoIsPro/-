#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main ()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");
    cout<<"��� �� ����� ����� 1? ";
    string Y;
    cin>>Y;
    cout<<"��� �� ����� ����� 2? ";
    string X;
    cin>>X;
    char duska [9] [9];
    duska [0][0]='t';
    duska [0][1]='h';
    duska [0][2]='o';
    duska [0][3]='q';
    duska [0][4]='k';
    duska [0][5]='o';
    duska [0][6]='h';
    duska [0][7]='t';
    duska [1][0]='p';
    duska [1][1]='p';
    duska [1][2]='p';
    duska [1][3]='p';
    duska [1][4]='p';
    duska [1][5]='p';
    duska [1][6]='p';
    duska [1][7]='p';
    duska [2][0]='';
    duska [2][1]='';
    duska [2][2]='';
    duska [2][3]='';
    duska [2][4]='';
    duska [2][5]='';
    duska [2][6]='';
    duska [2][7]='';
    duska [3][0]='';
    duska [3][1]='';
    duska [3][2]='';
    duska [3][3]='';
    duska [3][4]='';
    duska [3][5]='';
    duska [3][6]='';
    duska [3][7]='';
    duska [4][0]='';
    duska [4][1]='';
    duska [4][2]='';
    duska [4][3]='';
    duska [4][4]='';
    duska [4][5]='';
    duska [4][6]='';
    duska [4][7]='';
    duska [5][0]='';
    duska [5][1]='';
    duska [5][2]='';
    duska [5][3]='';
    duska [5][4]='';
    duska [5][5]='';
    duska [5][6]='';
    duska [5][7]='';
    duska [6][0]='P';
    duska [6][1]='P';
    duska [6][2]='P';
    duska [6][3]='P';
    duska [6][4]='P';
    duska [6][5]='P';
    duska [6][6]='P';
    duska [6][7]='P';
    duska [7][0]='T';
    duska [7][1]='H';
    duska [7][2]='O';
    duska [7][3]='Q';
    duska [7][4]='K';
    duska [7][5]='O';
    duska [7][6]='H';
    duska [7][7]='T';
        int z=8;
        int c=8;
        int chislo;
        char bukva;
        int chislo2;
        int chislo_dve;
        char bukva_dve;
        int chislo2_dve;
        for (int i=1; i<=100000; i++){
        for (int i=0; i<8; i++){
            cout<<z<<"|";
        for (int q=0; q<8; q++){
                cout<< duska [i] [q]<<"|";
            }
    cout<<endl;
    z--;
        }
    z=8;
    cout<<"  A B C D E F G H"<<endl;
    cout<<"��� � �� "<<Y<<"."<<endl;
    cout<<"���������: ���� ��� ��� ������ � "<<X<<" �� �� ������� ����!"<<endl;
    cout<<"������ ���� �� ��������, ����� �� ������. ����� �������, ����� �������. ";
    cin>>bukva;
    cin>>chislo;
    int realno_chislo=8-chislo;
    if (bukva=='A' or bukva=='a'){
            chislo2=0;
    }
    if (bukva=='B' or bukva=='b'){
            chislo2=1;

    }
    if (bukva=='C' or bukva=='c'){
            chislo2=2;

    }
    if (bukva=='D' or bukva=='d'){
            chislo2=3;

    }
    if (bukva=='E' or bukva=='e'){
            chislo2=4;

    }
    if (bukva=='F' or bukva=='f'){
            chislo2=5;

    }
    if (bukva=='G' or bukva=='g'){
            chislo2=6;

    }
    if (bukva=='H' or bukva=='h'){
            chislo2=7;
    }
    if (duska [realno_chislo] [chislo2]== 'P' or duska [realno_chislo] [chislo2]== 'p'){
    cout<<"������� ���� �� �� ������ ��� ������ ������ ������ �� ��� � ���� ���� ������ �� ������ �� ��� �������. ��������� �����, �������� ���� ���� ���������� ������. ������� �� ���� �� �� ����� ����� ��� ��������! ��� ��������� ��������, ����� �� ����� �� �����, ����� ���� �� �� ������� ���� ��� �������� �� �� � ������ �������, ����� ����� �� �� ������� ����������� ��������. ��� ���������� ����� ���� ������� �� �� ������ ����� ��� ������ �� ���, �������� �� � ��� ������ ������, ��� ����� ����� �� ������� ���������� �����, ��������� ��� ����� �. ��� ������� �� ������ ���� �� ������  (������� ���� �� �������� �� �������� ��), ������� �� �������� � ����� �� ���� ������ (��� �, �� ����� ���� ��� ����� ������)."<<endl;
    }
    if (duska [realno_chislo] [chislo2]== 't' or duska [realno_chislo] [chislo2]== 'T'){
    cout<<"����� ���� �� �� ����� ������, ������� �� ����, � ��������, �������� �� ����. ��� ������ �������� ������, � ��������� � ����� �� ������� �����. ����� � �����, ��� � ����� ������ �� �� ��������, ���� �� �������� ������. ��� � � ������� ���, ����� ������� �� ���� ���� �� ���� �� �������, � ����� ������� �� ��� ������ �� ����� ���� �� �������. ��� �������� � � �������� ���, ����� ������� �� ��� ������ �� ���� �� �������, � ����� ������� �� ��� ������ �� ����� ����."<<endl;
    }
    if (duska [realno_chislo] [chislo2]== 'o' or duska [realno_chislo] [chislo2]== 'O'){
    cout<<"�������� ���� �� �� ����� �� ��������, ������� �� ����. ��� ������ �������� �����, � ��������� � ����� �� ������� �����."<<endl;
    }
    if (duska [realno_chislo] [chislo2]== 'h' or duska [realno_chislo] [chislo2]== 'H'){
    cout<<"����� ���� �� �� ����� ��� ������� �� �, ���� �������� �������� �� ��� �� � ��������� ��������, ����� ����� �� ���������. �-��, ����� ������ �����, � ��������� �� ������ ������ - ��� � ���� ������ � ����, ����� �� ���������� ������ ��� ������� ������ �������� �� ������� ��� ������."<<endl;
    }
    if (duska [realno_chislo] [chislo2]== 'k' or duska [realno_chislo] [chislo2]== 'K'){
    cout<<"����� ���� �� �� ����� �� ��������, ������, �������, ������ � �����, ���� ������ �� ����� � �� ���� ���������. �� ����� ����� � ����� ������. ����� � �����, ��� � ����� ������ �� �� ��������, ���� �� �������� ������. ��� � � ������� ���, ����� ������� �� ���� ���� �� ���� �� �������, � ����� ������� �� ��� ������ �� ����� ���� �� �������. ��� �������� � � �������� ���, ����� ������� �� ��� ������ �� ���� �� �������, � ����� ������� �� ��� ������ �� ����� ����."<<endl;
    }
    if (duska [realno_chislo] [chislo2]== 'Q' or duska [realno_chislo] [chislo2]== 'Q'){
    cout<<"�������� ���� �� �� ����� �� ��������, ������, �������, ������ � �����, �� ������� ������ �� ����. ���� ������ �� �������� ������ � ����� � ������� �� ������� �����."<<endl;
    }
    cout<<"������ ������, ������ �� � ������. ";
    cin>>bukva_dve;
    cin>>chislo_dve;
    int realno_chislo_dve=8-chislo_dve;
    if (bukva_dve=='A' or bukva_dve=='a'){
            chislo2_dve=0;
    }
    if (bukva_dve=='B' or bukva_dve=='b'){
            chislo2_dve=1;

    }
    if (bukva_dve=='C' or bukva_dve=='c'){
            chislo2_dve=2;

    }
    if (bukva_dve=='D' or bukva_dve=='d'){
            chislo2_dve=3;

    }
    if (bukva_dve=='E' or bukva_dve=='e'){
            chislo2_dve=4;

    }
    if (bukva_dve=='F' or bukva_dve=='f'){
            chislo2_dve=5;

    }
    if (bukva_dve=='G' or bukva_dve=='g'){
            chislo2_dve=6;

    }
    if (bukva=='H' or bukva=='h'){
            chislo2_dve=7;
    }
    duska [realno_chislo_dve] [chislo2_dve]=duska [realno_chislo] [chislo2];
    duska [realno_chislo] [chislo2]='';
    for (int I=0; I<8; I++){
        cout<<c<<"|";
    for (int Q=0; Q<8; Q++){
        cout<< duska [I] [Q]<<"|";
    }
    cout<<endl;
    c--;
    }
    c=8;
    cout<<"  A B C D E F G H"<<endl;
    cout<<"��� � �� "<<X<<"."<<endl;
    cout<<"������ ���� �� ��������, ����� �� ������. ����� �������, ����� �������. ";
    cin>>bukva;
    cin>>chislo;
    realno_chislo=8-chislo;
    if (bukva=='A' or bukva=='a'){
            chislo2=0;
    }
    if (bukva=='B' or bukva=='b'){
            chislo2=1;

    }
    if (bukva=='C' or bukva=='c'){
            chislo2=2;

    }
    if (bukva=='D' or bukva=='d'){
            chislo2=3;

    }
    if (bukva=='E' or bukva=='e'){
            chislo2=4;

    }
    if (bukva=='F' or bukva=='f'){
            chislo2=5;

    }
    if (bukva=='G' or bukva=='g'){
            chislo2=6;

    }
    if (bukva=='H' or bukva=='h'){
            chislo2=7;
    }
    cout<<"������ ������, ������ �� � ������. ";
    cin>>bukva_dve;
    cin>>chislo_dve;
    realno_chislo_dve=8-chislo_dve;
    if (bukva_dve=='A' or bukva_dve=='a'){
            chislo2_dve=0;
    }
    if (bukva_dve=='B' or bukva_dve=='b'){
            chislo2_dve=1;

    }
    if (bukva_dve=='C' or bukva_dve=='c'){
            chislo2_dve=2;

    }
    if (bukva_dve=='D' or bukva_dve=='d'){
            chislo2_dve=3;

    }
    if (bukva_dve=='E' or bukva_dve=='e'){
            chislo2_dve=4;

    }
    if (bukva_dve=='F' or bukva_dve=='f'){
            chislo2_dve=5;

    }
    if (bukva_dve=='G' or bukva_dve=='g'){
            chislo2_dve=6;

    }
    if (bukva=='H' or bukva=='h'){
            chislo2_dve=7;
    }
    duska [realno_chislo_dve] [chislo2_dve]=duska [realno_chislo] [chislo2];
    duska [realno_chislo] [chislo2]='';
    if (duska [0][0]!='K'& duska [0][1]!='K' & duska [0][2]!='K' & duska [0][3]!='K' & duska [0][4]!='K' & duska [0][5]!='K' & duska [0][6]!='K' & duska [0][7]!='K' & duska [1][0]!='K' & duska [1][1]!='K' & duska [1][2]!='K' & duska [1][3]!='K' & duska [1][4]!='K' & duska [1][5]!='K' & duska [1][6]!='K' & duska [1][7]!='K' & duska [2][0]!='K' & duska [2][1]!='K' & duska [2][2]!='K' & duska [2][3]!='K' & duska [2][4]!='K' & duska [2][5]!='K' & duska [2][6]!='K' & duska [2][7]!='K' & duska [3][0]!='K' & duska [3][1]!='K' & duska [3][2]!='K' & duska [3][3]!='K' & duska [3][4]!='K' & duska [3][5]!='K' & duska [3][6]!='K' & duska [3][7]!='K' & duska [4][0]!='K' & duska [4][1]!='K' & duska [4][2]!='K' & duska [4][3]!='K' & duska [4][4]!='K' & duska [4][5]!='K' & duska [4][6]!='K' & duska [4][7]!='K' & duska [5][0]!='K' & duska [5][1]!='K' & duska [5][3]!='K' & duska [5][4]!='K' & duska [5][5]!='K' & duska [5][6]!='K' & duska [5][7]!='K' & duska [6][0]!='K' & duska [6][1]!='K' & duska [6][2]!='K' & duska [6][3]!='K' & duska [6][4]!='K' & duska [6][5]!='K' & duska [6][6]!='K' & duska [6][7]!='K' & duska [7][0]!='K' & duska [7][1]!='K' & duska [7][2]!='K' & duska [7][3]!='K' & duska [7][4]!='K' & duska [7][5]!='K' & duska [7][6]!='K'& duska [7][7]!='K'){
    cout<<"������� � ������� ������ ������! (�� ������� ���� ������ �� � "<<X<<".)"<<endl;
    _sleep (10000);
    system ("CLS");
    system("��8.exe");
    }
    if (duska [0][0]!='k'& duska [0][1]!='k' & duska [0][2]!='k' & duska [0][3]!='k' & duska [0][4]!='k' & duska [0][5]!='k' & duska [0][6]!='k' & duska [0][7]!='k' & duska [1][0]!='k' & duska [1][1]!='k' & duska [1][2]!='k' & duska [1][3]!='k' & duska [1][4]!='k' & duska [1][5]!='k' & duska [1][6]!='k' & duska [1][7]!='k' & duska [2][0]!='k' & duska [2][1]!='k' & duska [2][2]!='k' & duska [2][3]!='k' & duska [2][4]!='k' & duska [2][5]!='k' & duska [2][6]!='k' & duska [2][7]!='k' & duska [3][0]!='k' & duska [3][1]!='k' & duska [3][2]!='k' & duska [3][3]!='k' & duska [3][4]!='k' & duska [3][5]!='k' & duska [3][6]!='k' & duska [3][7]!='k' & duska [4][0]!='k' & duska [4][1]!='k' & duska [4][2]!='k' & duska [4][3]!='k' & duska [4][4]!='k' & duska [4][5]!='k' & duska [4][6]!='k' & duska [4][7]!='k' & duska [5][0]!='k' & duska [5][1]!='k' & duska [5][3]!='k' & duska [5][4]!='k' & duska [5][5]!='k' & duska [5][6]!='k' & duska [5][7]!='k' & duska [6][0]!='k' & duska [6][1]!='k' & duska [6][2]!='k' & duska [6][3]!='k' & duska [6][4]!='k' & duska [6][5]!='k' & duska [6][6]!='k' & duska [6][7]!='k' & duska [7][0]!='k' & duska [7][1]!='k' & duska [7][2]!='k' & duska [7][3]!='k' & duska [7][4]!='k' & duska [7][5]!='k' & duska [7][6]!='k'& duska [7][7]!='k'){
    cout<<"������� � ������� ������ ������! (�� ������� ���� ������ �� � "<<Y<<".)"<<endl;
    _sleep (10000);
    system ("CLS");
    system("��8.exe");
    }
}
    return 0;
}
