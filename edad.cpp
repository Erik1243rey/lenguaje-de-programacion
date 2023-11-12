// include <iostream> sirve para organizar el codigo en grupos logicos
#include <iostream>
//using namespace permite contener las clases y funciones de std
using namespace std;
//funcion int main()sirve para punto de partida de la ejecucion del programa
int main()
{
    // int edad = 0 es para darle valor inicial a la variable edad
    int edad = 0;
    cout<<"ingresa tu edad  "; /*cout nos muestra en pantalla el texto "ingresar edad" para que el usuario
    sepa lo que se necesita hacer */
    cin >> edad;//ingresar por teclado la edad 
    
    if(edad>=18) /*se ocupa la condicional if else, para determinar si el valor ingresado indica si eres mayor
    edad o de lo contrario te imprima en pantalla que eres menor de edad */
    {
        cout<<"es mayor de edad";
    }
    else //en dado caso que no se cumpla la primera condicion se ejecuta el else 
    {
        cout<<"es menor de edad";
    }
    return 0; //se ocupa para saber si funciono correctamente el programa
}