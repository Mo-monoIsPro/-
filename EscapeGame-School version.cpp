#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include <windows.h>
using namespace std;
int Movement (char multi_level [100] [100], char izbor_na_potrebitelq)
{
    int STARTI, STARTQ;
    for (int I=0; I<=100; I++){
        for (int Q=0; Q<=100; Q++){
            if (multi_level [I] [Q]=='U'){
                STARTI=I;
                STARTQ=Q;
            }
        }
    }
    if(izbor_na_potrebitelq=='w' and multi_level [STARTI-1] [STARTQ]!='*'){
        multi_level [STARTI-1] [STARTQ]=multi_level [STARTI] [STARTQ];
        multi_level [STARTI] [STARTQ]=' ';
    }
    else if(izbor_na_potrebitelq=='a' and multi_level [STARTI] [STARTQ-1]!='*'){
        multi_level [STARTI] [STARTQ-1]=multi_level [STARTI] [STARTQ];
        multi_level [STARTI] [STARTQ]=' ';
    }
    else if(izbor_na_potrebitelq=='s' and multi_level [STARTI+1] [STARTQ]!='*'){
        multi_level [STARTI+1] [STARTQ]=multi_level [STARTI] [STARTQ];
        multi_level [STARTI] [STARTQ]=' ';
    }
    else if(izbor_na_potrebitelq=='d' and multi_level [STARTI] [STARTQ+1]!='*'){
        multi_level [STARTI] [STARTQ+1]=multi_level [STARTI] [STARTQ];
        multi_level [STARTI] [STARTQ]=' ';
    }
}
int RandomMovement (char multi_level [100] [100], int random_chislo, char letter [2])
{
    int BADI, BADQ;
    for (int I=0; I<=100; I++){
        for (int Q=0; Q<=100; Q++){
            if (multi_level [I] [Q]==letter [0]){
                BADI=I;
                BADQ=Q;
            }
        }
    }
    if (random_chislo==1 and multi_level [BADI] [BADQ-1]!='*'){
        multi_level [BADI] [BADQ-1]=letter [0];
        multi_level [BADI] [BADQ]=' ';
    }
    else if (random_chislo==2 and multi_level [BADI+1] [BADQ]!='*'){
        multi_level [BADI+1] [BADQ]=letter [0];
        multi_level [BADI] [BADQ]=' ';
    }
    else if (random_chislo==3 and multi_level [BADI] [BADQ+1]!='*'){
        multi_level [BADI] [BADQ+1]=letter [0];
        multi_level [BADI] [BADQ]=' ';
    }
    else if (random_chislo==4 and multi_level [BADI-1] [BADQ]!='*'){
        multi_level [BADI-1] [BADQ]=letter [0];
        multi_level [BADI] [BADQ]=' ';
    }
}
int main ()
{
    srand(time(0));
    char movement;
    cout<<" ***** ***** ***** ***** ***** ***** \n";
    cout<<" *     *     *     *   * *   * *     \n";
    cout<<" ***** ***** *     ***** ***** ***** \n";
    cout<<" *         * *     *   * *     *     \n";
    cout<<" ***** ***** ***** *   * *     ***** \n \n";
    _sleep (2000);
    cout<<"Made by Momchil Gantchev \n \n";
    _sleep (2000);
    cout<<"Write your name: ";
    string name;
    cin>>name;
    cout<<endl;
    cout<<"Hello "<<name<<"! You are trapped in this labyrinth. You can't escape from it! \n";
    cout<<"Bad guy\n";
    cout<<"   *\n";
    cout<<" *****\n";
    cout<<" * * *\n";
    cout<<"   *\n";
    cout<<"  * *\n";
    _sleep (6000);
    system ("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    char level_one [100] [100]= {
        {"*******************"},
        {"                  *"},
        {"***************** *"},
        {"*U                *"},
        {"*******************"},
    };
    while (level_one [1] [0]!='U'){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout<<"Level 1 \n";
        cout<<name<<" move to the end of the level. Use WASD to move. \n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        for (int i=0; i<5; i++){
        for (int q=0; q<19; q++){
            if (level_one [i] [q]=='U'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"U";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            }
            else cout<<level_one [i] [q];
        }
        cout<<endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cin>>movement;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    Movement (level_one, movement);
    system ("CLS");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"Level 1 \n";
    cout<<name<<" move to the end of the level. Use WASD to move. \n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    for (int i=0; i<5; i++){
    for (int q=0; q<19; q++){
            if (level_one [i] [q]=='U'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"U";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            }
            else cout<<level_one [i] [q];
    }
    cout<<endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"Level complete!\n";
    cout<<"Type <easy> or something like this to continue. \n";
    string gg;
    cin>>gg;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    system ("CLS");
    char level_two [100] [100]={
        {"**************************************************"},
        {"********  *      *        *                       "},
        {"*********  * *****      * ******** **** **********"},
        {"********** *******************   ***    ****     *"},
        {"********** ****************  * *   * ******   *  *"},
        {"*********  **********          * * * ******  *   *"},
        {"*                 **           * *            *  *"},
        {"*                 *            * *************** *"},
        {"*                                               U*"},
        {"**************************************************"},
    };
    while (level_two [1] [49]!='U'){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout<<"Hot tip: \nYou can choose more than one move per turn. For example, if you want to move 4 times in right, you can type <dddd>.\n";
        cout<<"Level 2 \n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        for (int i=0; i<10; i++){
        for (int q=0; q<50; q++){
            if (level_two [i] [q]=='U'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"U";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            }
            else cout<<level_two [i] [q];
        }
        cout<<endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cin>>movement;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    Movement (level_two, movement);
    system ("CLS");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"Hot tip: \nYou can choose more than one move per turn. For example, if you want to move 4 times in right, you can type <dddd>.\n";
    cout<<"Level 2 \n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    for (int i=0; i<10; i++){
    for (int q=0; q<50; q++){
            if (level_two [i] [q]=='U'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"U";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            }
            else cout<<level_two [i] [q];
    }
    cout<<endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"Level complete!\n";
    cout<<"Type <easy> or something like this to continue. \n";
    cin>>gg;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    system ("CLS");
    char level_three [100] [100]={
    {"*********************************************"},
    {"*                                      *   B*"},
    {"*   *                                  *    *"},
    {"*      *                                    *"},
    {"*        *           *     *    *           *"},
    {"*   *       *  *                      *     *"},
    {"*        *                    *             *"},
    {"*            *    *          *    *   *     *"},
    {"*U                                          *"},
    {"*********************************************"},
    };
    int dali=0;
    for (int c=1;; c++){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout<<"Level 3 \n\nKill the Bad guy! \n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        for (int i=0; i<10; i++){
        for (int q=0; q<45; q++){
            if (level_three [i] [q]=='U'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"U";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            }
            else{
                if (level_three[i] [q]== 'B'){
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                    cout<<"B";
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
                }
                else cout<<level_three [i] [q];
            }
            if (level_three [i][q]=='U'){
            dali++;
            }
        }
        cout<<endl;
    }
    if (dali<c){
        break;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cin>>movement;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    Movement (level_three, movement);
    int num = rand() % 4 + 1;
    char B [2]="B";
    RandomMovement (level_three, num, B);
    system ("CLS");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"The bad guy beat you! You can't kill enemies when they are awake cause you are level 1 and they are level 100! You can only beat them (if you manage to be faster than them) for 1 turn and then they come back and better don't be in front of their eyes!\n";
    cout<<"The bad guy trapped you in a new labyrinth!!!\n";
    cout<<"Type <easy> or something like this to continue. \n";
    cin>>gg;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    system ("CLS");
    char level_four [100][100]={
    {"*********************************************"},
    {"* *       **  ***         *            *     "},
    {"* * ***     ***  * ****** **************  * *"},
    {"* *   ****       * *    *                 * *"},
    {"* *      ****    * * ** ** **************** *"},
    {"* ****      ****** * *U * **              * *"},
    {"*    *****         * **** **              * *"},
    {"*        ***  ****        **                *"},
    {"*                *** ********************** *"},
    {"*********************************************"},
    };
    while (level_four [1] [44]!='U'){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout<<"Level 4\n\nEscape from the labyrinth.\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        for (int i=0; i<10; i++){
        for (int q=0; q<45; q++){
            if (level_four [i] [q]=='U'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"U";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            }
            else cout<<level_four [i] [q];
        }
        cout<<endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cin>>movement;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    Movement (level_four, movement);
    system ("CLS");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"Level 4\n\nEscape from the labyrinth.\n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    for (int i=0; i<10; i++){
    for (int q=0; q<45; q++){
            if (level_four [i] [q]=='U'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"U";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            }
            else cout<<level_four [i] [q];
    }
    cout<<endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<name<<", you escaped! Now it's time to kill the Bad guy while he is sleeping! \n";
    cout<<"Type <easy> or something like this to continue. \n";
    cin>>gg;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    system ("CLS");
    char level_five [100] [100]{
        {"**************************************************"},
        {"*  M               * Z                     * z z *"},
        {"*                  *     *                 *  z B*"},
        {"*                        * P               ***** *"},
        {"*                  *     *                 *     *"},
        {"*                  *     *                 *     *"},
        {"*                        * L               *     *"},
        {"*** *              *     *          * ******     *"},
        {"*U  *       K      * X              *           G*"},
        {"**************************************************"},
    };
    int dali2=0, br=0;
    while (level_five [2][48]=='B'){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout<<"Level 5\n\nKill the bad guy while he is sleeping...but be careful he has evil guards...\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        for (int i=0; i<10; i++){
        for (int q=0; q<50; q++){
            if (level_five [i] [q]=='U'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"U";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            }
            else {
                if (level_five [i] [q]=='M' or level_five [i] [q]=='K' or level_five [i] [q]=='X' or level_five [i] [q]=='Z' or level_five [i] [q]=='B'
                    or level_five [i] [q]=='L' or level_five [i] [q]=='G' or level_five [i] [q]=='P'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                cout<<level_five [i] [q];
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
                }
                else cout<<level_five [i] [q];
            }
            if (level_five [i][q]=='U'){
            dali2++;
            }
        }
        cout<<endl;
    }
    br++;
    if (br>dali2){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout<<"You died! Good luck next time!\nWrite 1 to go restart the program.\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        int oneORtwo;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cin>>oneORtwo;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        if (oneORtwo==1){
            system ("CLS");
            system ("EscapeGame.exe");
        }
        else return 0;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cin>>movement;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
    Movement (level_five, movement);
    int num1 = rand() % 4 + 1;
    char M [2]="M";
    RandomMovement (level_five, num1, M);
    int num2 = rand() % 4 + 1;
    char K [2]="K";
    RandomMovement (level_five, num2, K);
    int num3 = rand() % 4 + 1;
    char X [2]="X";
    RandomMovement (level_five, num3, X);
    int num4 = rand() % 4 + 1;
    char Z [2]="Z";
    RandomMovement (level_five, num4, Z);
    int num5 = rand() % 4 + 1;
    char P [2]="P";
    RandomMovement (level_five, num5, P);
    int num6 = rand() % 4 + 1;
    char L [2]="L";
    RandomMovement (level_five, num6, L);
    int num7 = rand() % 4 + 1;
    char G [2]="G";
    RandomMovement (level_five, num7, G);
    system ("CLS");
    }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout<<"Level 5\n\nKill the bad guy while he is sleeping...but be careful he has evil guards...\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        for (int i=0; i<10; i++){
        for (int q=0; q<50; q++){
            if (level_five [i] [q]=='U'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"U";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            }
            else {
                if (level_five [i] [q]=='M' or level_five [i] [q]=='K' or level_five [i] [q]=='X' or level_five [i] [q]=='Z' or level_five [i] [q]=='B'
                    or level_five [i] [q]=='L' or level_five [i] [q]=='G' or level_five [i] [q]=='P'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                cout<<level_five [i] [q];
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
                }
                else cout<<level_five [i] [q];
            }
        }
        cout<<endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"Game over! You win!\n";
    return 0;
}
