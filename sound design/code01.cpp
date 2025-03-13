#include <iostream>
using namespace std;

int main() {
    // Dichiarazione delle variabili
    int num1, num2, somma;

    // Richiesta dei numeri all'utente
    cout << "Inserisci il primo numero: ";
    cin >> num1;

    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    // Calcolo della somma
    somma = num1 + num2;

    // Visualizzazione del risultato
    cout << "La somma di " << num1 << " e " << num2 << " e': " << somma << endl;

    return 0;
}
