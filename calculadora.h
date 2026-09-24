#include <iostream> 
#include <cmath>
#include <string>
#ifndef CALCULADORA_H
#define CALCULADORA_H

using namespace std;

class calculadora {

    private:
        double num1;
        double num2;
        double resultado;
        double adicao;
        double subtracao;
        double divisao;
        double multiplicacao;
        int potencia;
        int potencia3;

    public:
        calculadora();
        void setNum1(double n1);
        void setNum2(double n2);
        double getNum1();
        double getNum2();
        double getResultado();
        double resultadosomar();
        double resultadosubtrair();
        double resultadodividir();
        double resultadomultiplicar();
        int resultadoPotencia();
        int resultadoPotencia3();

        void imprimeinfo();


};

#endif
