#include <iostream>
using namespace std;
int main() {
    // Declarar variables inicializandolos en 0
        float valor1 = 0.0;
        float valor2 = 0.0;
    // Pedir al usuario que ingrese dos valores ya sean enteros o con punto decimal
    cout << "Introducir 2 numeros que pueden ser enteros o con punto decimal";
    cout << "\nIntroducir el valor del primer numero: " ;
    cin >> valor1;
    cout << "Introducir el valor del segundo numero: ";
    cin >> valor2;
    // Aqui se realizan las operaciones matematicas
    float suma = valor1 + valor2;
    float resta = valor1 - valor2;
    float multiplicacion = valor1 * valor2;
    //restriccion para que no se divida entre cero
    float division;
    if (valor2 != 0){
       division = valor1 / valor2;
    } else{
        cout<< "no se puede dividir entre 0";
        return 1; //se finaliza el programa 
    }
     /* Aqui se muestran las impresiones en pantalla con los resultados obtenidos de cada
    operacion*/
    cout << "\nLa suma es: " << suma ;
    cout << "\nLa resta es: " << resta ;
    cout << "\nLa multiplicacion es: "<< multiplicacion ;
    cout << "\nLa division es: "<< division ;
    
    return 0;
}