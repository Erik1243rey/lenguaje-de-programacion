#include <iostream>
#include <string>
#include <sstream>

using namespace std;
    //metodo void para convertir las palabras ingresadas a mayusculas
    void Mayuscula (string &pal){
       for(int i = 0; i<pal.length(); i++){
          pal[i] = towupper(pal[i]);
        }
    }

int main()
{
    //declaracion de variables y su inicializacion
    string apellidoPaterno = "";
    string apellidoMaterno = "";
    string nombre = "";
    string vocal = "";
    string diaNacimiento = "";
    string mesNacimiento = "";
    string anioNacimiento = "";
    string rfc = "";

    // Solicita los datos al usuario
    cout <<"calculo de RFC \n";
    cout << "Ingrese el apellido paterno: ";
    getline(cin, apellidoPaterno);
    cout << "Ingrese el apellido materno: ";
    getline(cin, apellidoMaterno);
    cout << "Ingrese el nombre: ";
    getline(cin, nombre);
    cout <<"fecha de nacimiento (solo numeros DD/MM/AAAA) \n";
    cout << "Ingrese el día de nacimiento: ";
    cin >> diaNacimiento;
    cout << "Ingrese el mes de nacimiento: ";
    cin >> mesNacimiento;
    cout << "Ingrese el año de nacimiento: ";
    cin >> anioNacimiento;
    
    //codigo para generar RFC
    rfc = apellidoPaterno.substr(0, 1);
    //sentencia para que el sistema muestre la primera vocal del apellido paterno
    for(int i=1; i<apellidoPaterno.length(); ++i)
    {
        char letra= apellidoPaterno[i];
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U')
        {
            vocal += letra;
            break;
        }
    }
    rfc = rfc + vocal;
    //funcion .empty para mandar por default una X en dado caso que no cuente con apellido materno
    rfc  += (apellidoMaterno.empty() ? 'X' : apellidoMaterno[0]);
    //funcion .substr sirve para cortar una cadena y utilizar los caracteres que se necesiten
    rfc += nombre.substr(0, 1);
    rfc += anioNacimiento.substr(2, 2);
    rfc += mesNacimiento;
    rfc += diaNacimiento;
    //declaracion de variable Mayuscula asignandolo a rfc, para que imprima el texto en Mayusculas
    Mayuscula(rfc);
    //impresion final del RFC
    cout << "su RFC sin homoclave es: "<< rfc;

return 0;
}

