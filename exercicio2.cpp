/*g. Utilizando o último valor calculado de c, recalcule o valor da mesma
utilizando a expressão 𝑎2 + 2 * 𝑏 + 𝑐, imprima o resultado na tela;*/

#include <iostream>

using namespace std;

int main (void){
    int a, b, c;
    cout << "Digite um numero inteiro: ";
    cin >> a;
    cout << "Digite outro numero inteiro: ";
    cin >> b;

    c = 4 * a + b / 3 - 5;
    cout << "4 * a + b / 3 - 5 = " << c << endl;

    c = 4 * (a + b) / (3 - 5);
    cout << "4 * (a + b) / (3 - 5) = " << c << endl;

    //O resultado é diferente, devido a inclusão dos parenteses que priorizam
    //o que estiver dentro deles, ao invés da prioridade natural matemática.
    //Abaixo outro exemplo:

    c = (4 * a) + b / (3 - 5);
    cout << "(4 * a) + b / (3 - 5) = " << c << endl;

    int d;
    d = (a * a) + 2 * b + c;
    cout << "(a*a) + 2 * b + c = " << d << endl;

    return 0;
}