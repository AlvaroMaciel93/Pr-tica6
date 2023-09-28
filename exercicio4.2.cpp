#include <iostream>

using namespace std;

int main() {
    double raio, diametro, circ, area;

    cout << "Digite o raio do círculo: ";
    cin >> raio;

    // Diâmetro
    diametro = 2 * raio;
    cout << "O diâmetro do círculo é: " << diametro << endl;

    // Circunferência
    circ = 2 * 3.14 * raio;
    cout << "A circunferência do círculo é: " << circ << endl;

    // Área
    area = 3.14 * (raio * raio);
    cout << "A área do círculo é: " << area << endl;

    return 0;
}