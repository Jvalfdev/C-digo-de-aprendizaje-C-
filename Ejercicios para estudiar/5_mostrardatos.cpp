/**
 * All rights reserved
 *
 * M.I.T License
 *
 * Se piden datos y, una vez introducidos, se le muestran al usuario.
 *
 * @summary Pedir datos al usuario y mostrarlos por pantalla
 * @author Jose Vallejo
 *
 * Created at     : 2020-12-04 10:04:27 
 * Last modified  : 2020-12-04 10:45:11
 */

#include <iostream>
#include <string> //Esta nueva linea la utilizamos para poder insertar datos de tipo string

using namespace std;

int main (){
    string nombre, apellidos; //Declaramos el nombre y apellidos de tipo string 'cadena de caracteres'
    float altura, peso; //El peso y la altura la declaramos de tipo 'float' ya que puede contener decimales
    int edad; //La edad de tipo entero ya que no contiene decimales

    cout << "Introduzca su nombre" << endl;
    //Usamos getline para introducir cadena de caracteres, 
    getline(cin, nombre); //En 'cin' va la via por la que queremos meter los datos y 'nombre' la variable en la que queremos almacenarlos
    cout << "Introduzca sus apellidos" << endl;
    getline(cin, apellidos); //Igual que en el nombre; cin: Via de entrada de datos, apellidos: Donde guardar los datos
    cout << "Introduzca su peso en kg" << endl;
    cin >> peso; //Para el peso ya no hace falta utilizar el 'getline', con el 'cin' nos vale
    cout << "Introduzca su altura en metros" << endl;
    cin >> altura; //Introducimos altura
    cout << "Que edad tiene?" << endl;
    cin >> edad; //Se introduce edad

    //Mostramos los resultado introducidos
    cout << "--------------------------------" << endl;
    cout << "Sus datos son:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Edad: " << edad <<" a\xA4os" << endl;//Para poder introducir la ñ he utilizado \xA4, que imprime una ñ
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Peso: " << peso << " kg" <<endl;
    cout << "--------------------------------" << endl;

    system("pause");    
    return 0;
}

