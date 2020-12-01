#include <iostream>

using namespace std;

int cislo1;
int cislo2;
int vysledek;
char operace;

int vypocet(char operace, int hodnota1, int hodnota2)
{
    int output = 0;
    if (isdigit(hodnota1) && isdigit(hodnota2))
    {
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
                if(hodnota2 != 0) {
                   output = hodnota1 / hodnota2;
                }
                cout << "Nulou nelze delit! \n";
                break;

            default:
                cout << "Nepis sem blbosti! \n";
                return -2147483648;
                break;
        }
    }
    return output;
}

int main()
{
    while(true){
        cout << "Zadej operaci \n";
        cin >> operace;

        cout << "Napis cislo 1 \n";
        cin >> cislo1;

        cout << "Napis cislo 2 \n";
        cin >> cislo2;

        vysledek = vypocet(operace, cislo1, cislo2);
        if (vysledek != -2147483648){
            cout << "Vysledek: " << vysledek << "\n";
        } return 1;
    }
}
