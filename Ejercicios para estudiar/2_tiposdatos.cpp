/**
 * All rights reserved
 *
 * M.I.T License
 *
 * @summary Programa para repasar tipos de datos en C++.
 * @author Jose Vallejo
 *
 * Created at     : 2020-12-03 19:45:40 
 * Last modified  : 2020-12-03 19:46:37
 */

#include <iostream>
#include <string>


using namespace std;

int main(){
    int numentero; //Numero entero
    float numfloat; //Numero con pocos decimales
    double numdoubl; //Numero con muchos decimales
    char caracter; //Texto y caracteres especiales
    string texto;
    bool respuesta = true; //Solo tiene dos valores, True o False.
    

    cout << "Buenas, este programa sirve para repasar los tipos de datos en C++.\nSi introduces los datos incorrectos el programa se cerrara automaticamente" << endl; 

    cout << "Introduce un numero entero: " << endl;
    cin >> numentero;
    cout << "El numero entero es un numero sin decimales." << endl;


    cout << "Ahora introduce un numero con decimales (maximo 7 decimales): " << endl;
    cin >> numfloat;
    cout << "El dato de tipo 'float' es un numero con hasta 7 decimales" << endl;

    cout << "Introduce un numero con varios decimales (no mas de 14 decimales)" << endl;
    cin >> numdoubl;
    cout << "El tipo de dato 'double' como su propio nombre indica, muestra el doble de precision que un numero float aportando el doble de numeros decimales. Incluso puede anadirle el prefijo 'long' (longdouble) para anadir mas precision." << endl;



    cout << "Introduce un caracter, puede incluir numeros y caracteres especiales"<< endl;
    cin >> caracter;
    cout << "El tipo de dato 'char' engloba tanto texto como numeros y caracteres especiales. Solo se puede seleccionar 1 dato." << endl;

    

    
    cout << "Introduce un texto. Se pueden incluir numeros y caracteres especiales ademas de letras"<< endl;
    cin.ignore();
    getline(cin, texto);



    cout << "El tipo de dato String se podria considerar una union de varios datos tipo 'char' en cadena, de ahi lo de 'string'" << endl;




    cout << "Los datos de tipo boolean solo tienen dos valores, True o False. Se utiliza mucho para condicionales." << endl;



    cout << "Los datos que has introducido han sido: " << endl;
    cout << "Numero entero: " << numentero << endl;
    cout << "Numero 'float': " << numfloat << endl;
    cout << "Numero 'double': " << numdoubl << endl;
    cout << "El texto ha sido: " << texto << endl;
    

    system("pause");

    return 0;
}