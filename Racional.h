#pragma once
 
#ifndef RACIONAL_H
#define RACIONAL_H

class Racional {

private:
    int numerador;
    int denominador;
    int numerador1;
    int denominador1;
    int numerador2;
    int denominador2;

public: 
    //prototipo de constructor
    Racional(void);
    Racional(int, int);

    void imprimirRacional(void);
    void imprimirDecimal(void);
    void simplificar(void);
    void sumar(void);
    void restar(void);
    void multiplicar(void);
    void dividir(void);
    int obtenerOperandoMenor();

#endif // !RACIONAL_H   

