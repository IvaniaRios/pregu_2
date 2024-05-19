#include <iostream>

using namespace std;

// Función de suma utilizando punteros
float suma(float *num1, float *num2) {
    return *num1 + *num2;
}

// Función de resta utilizando punteros
float resta(float *num1, float *num2) {
    return *num1 - *num2;
}

// Función de multiplicación utilizando punteros (basada en sumas)
float multiplicacion(float *num1, float *num2) {
    float resultado = 0;
    for (int i = 0; i < *num2; i++) {
        resultado += *num1;
    }
    return resultado;
}

// Función de división utilizando punteros (incluyendo decimales)
float division(float *num1, float *num2) {
    float resultado = 0;
    float residuo = *num1;

    while (residuo >= *num2) {
        resultado++;
        residuo =residuo- *num2;
    }

    // Ajustamos el resultado para incluir los decimales
    if (residuo > 0) {
        resultado += residuo / *num2;
    }

    return resultado;
}

int main() {
    float a, b;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
    cout << "Suma: " << suma(&a, &b) << endl;
    cout << "Resta: " << resta(&a, &b) << endl;
    cout << "Multiplicacion: " << multiplicacion(&a, &b) << endl;
    cout << "Division: " << division(&a, &b) << endl;

    return 0;
}
