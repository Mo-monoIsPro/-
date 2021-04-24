#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int i=0;
    srand(time(0));
    int num = rand() % 100 + 1;
    cout << "Guess My Number Game\n\n";

    int guess = 0;
    while (guess != num) {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;

        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
        else {
            cout << "\nCorrect! You got it in! "<<endl;
        }
        i++;
    }
    cout<<"You guessed in "<<i<<" tries.";

    return 0;
}
