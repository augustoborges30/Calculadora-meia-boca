#include <iostream>
#include "calculadora.h"
#include <cmath>


using namespace std;

 calculadora::calculadora() {
    num1 = 0;
    num2 = 0;
    resultado = 0;
    adicao = 0;
    subtracao = 0;
    divisao = 0;
    multiplicacao = 0;
    potencia = 0;
    potencia3 = 0;
}

void calculadora::imprimeinfo() {
    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;
    cout << "Resultado: " << resultado << endl;
    cout << "Adicao: " << adicao << endl;
    cout << "Subtracao: " << subtracao << endl;
    cout << "Divisao: " << divisao << endl;
    cout << "Multiplicacao: " << multiplicacao << endl;
    cout << "Potencia: " << potencia << endl;
    cout << "Potencia3: " << potencia3 << endl;
}

int main() {

    int calculadora1;
    double n1, n2, resultado, adicao, subtracao, divisao, multiplicacao;
    int potencia, potencia3;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

     for (int i = 0; i < 1; i++) {
        calculadora1 = 0;
        cout << "Escolha a operacao: " << endl;
        cout << "1 - Adicao" << endl;
        cout << "2 - Subtracao" << endl;
        cout << "3 - Divisao" << endl;
        cout << "4 - Multiplicacao" << endl;
        cout << "5 - Potencia" << endl;
        cout << "6 - Potencia ao cubo" << endl;
        cin >> calculadora1;

        switch (calculadora1) {
            case 1:
                resultado = n1 + n2;
                cout << "Resultado da adicao: " << resultado << endl;
                break;
            case 2:
                resultado = n1 - n2;
                cout << "Resultado da subtracao: " << resultado << endl;
                break;
            case 3:
                if (n2 != 0) {
                    resultado = n1 / n2;
                    cout << "Resultado da divisao: " << resultado << endl;
                } else {
                    cout << "Erro: Divisao por zero!" << endl;
                }
                break;
            case 4:
                resultado = n1 * n2;
                cout << "Resultado da multiplicacao: " << resultado << endl;
                break;
            case 5:
                resultado = pow(n1, 2);
                cout << "Resultado da potencia: " << resultado << endl;
                break;
            case 6:
                potencia3 = pow(n1, 3);
                cout << "Resultado da potencia ao cubo: " << potencia3 << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }
    }

    return 0;
}