#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "Guess My Number Game\n\n";
    cout<< "Choose the boundaries.\nThe smallest number is: ";
    long long dolna_granitsa;
    cin>>dolna_granitsa;
    cout<<"The biggest number is: ";
    long long gorna_granitsa;
    cin>>gorna_granitsa;
    srand(time(0));
    int num;
    while (num>gorna_granitsa or num<dolna_granitsa){
    num = rand();
    }
    int guess = 0;
    while (guess != num) {
        cout << "Enter a guess between "<<dolna_granitsa<<" and "<<gorna_granitsa<<". ";
        cin >> guess;

        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
        else {
            cout << "\nCorrect! You got it in ";
        }
    }

    return 0;
}
