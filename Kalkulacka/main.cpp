#include <iostream>

using namespace std;

int cislo1;
int cislo2;
int vysledek;
char operace;

int vypocet(char operace, int hodnota1, int hodnota2)
{
    int output;
    switch(operace)
    {
        case '+':
            output = hodnota1 + hodnota2;
            break;

        case '-':
            output = hodnota1 - hodnota2;
            break;

        case '*':
            output = hodnota1 * hodnota2;
            break;

        case '/':
            output = hodnota1 / hodnota2;
            break;

        default:
            break;
    }
    return output;
}

int main()
{
    cout << "Zadej operaci \n";
    cin >> operace;

    cout << "Napis cislo 1 \n";
    cin >> cislo1;

    cout << "Napis cislo 2 \n";
    cin >> cislo2;

    vysledek = vypocet(operace, cislo1, cislo2);
    cout << "Vysledek: " << vysledek << "\n";
    return 0;
}
