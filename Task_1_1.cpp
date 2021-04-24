#include <iostream> //tazi biblioteka ni e nuzna za c-in/out-vaneto.
#include <cstdlib>  // tazi biblioteka ni e nuzna za random generatora
#include <ctime>    // s tazi biblioteka vkarvame i vremeto v programata
using namespace std; //tova e podrazdelenie na iostream i si sukrashtavame teckst pret c-in/out-vaneto

int main() // otvarq se glavnata funktsiq main
{
    srand(time(0)); //vkarvame i vremeto pri formiranet o na random chislo
    int num = rand() % 100 + 1; // random chislo mezdu 1 and 100
    cout << "Guess My Number Game\n\n"; // izpisva na potrebitelq imeto na igrata

    int guess = 0; // vkarvame promenliva guess s nachalna stoinost 0
    while (guess != num) { // tikula shte se povtarq dokato guess e razlichno ot proizvolnoizbranoto chislo
        cout << "Enter a guess between 1 and 100 : "; //izpisva na potrebitelq da poznae chilsoto kato mu kazva che e mezdu i 100
        cin >> guess; // potrebitelq si populva chsilototo koeto smqta che e pravilno

        if (guess > num) { // ako chisloto e po-golqmo ot generirantot takova...
            cout << "Too high!\n\n"; //...ispisva che e tvurde golqmo
        }
        else if (guess < num) // ako chislotot e po-malko ot generiranoto takova...
            {
                cout << "Too low!\n\n"; //...izpisva che e tvurde malko
            }
        else { // v drugite cluchai...toset kato si poznaesh chisloto...
            cout << "\nCorrect! You got it in "; //ti izpisva che si go poznal
        }
    }

    return 0; //tui vrushta 0, ama veche ne e zadulzitelno da se pishe
}
