#include <iostream>
using namespace std;

int main() {
    int num1, num2, maior;

    cout << "Digite um número inteiro: ";
    cin >> num1;

    cout << "Digite outro número inteiro: ";
    cin >> num2;

    // Encontre o maior número usando o operador condicional (?)
    maior = (num1 > num2) ? num1 : num2;

    cout << "O número " << maior;
    
    // Verifique se os números são iguais usando o operador condicional (?)
    (num1 == num2) ? cout << "Os números são iguais" : cout << " é o maior.";

    // Verifique se o maior número é par ou ímpar
    if (maior % 2 == 0) {
        cout << " É par." << endl;
    } else {
        cout << " É ímpar." << endl;
    }

    return 0;
}

