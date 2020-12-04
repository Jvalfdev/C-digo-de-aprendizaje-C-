/**
 * All rights reserved
 *
 * M.I.T License
 *
 * Repasamos las operaciones de suma, resta, multiplicacion, division y modulo.
 *
 * @summary Operaciones aritmeticas en C++
 * @author Jose Vallejo
 *
 * Created at     : 2020-12-04 09:31:07 
 * Last modified  : 2020-12-04 09:54:11
 */

#include <iostream>

using namespace std;

int main(){
    int a, b;//Declaramos dos variables de tipo entero llamadas 'a' y 'b'
    float suma, resta, mult, div, modulo;//Esta variable indica el resultado, la declaramos tipo float porque el resultado puede contener decimales.

    cout << "Introduzca el primer numero(a): " << endl;
    cin >> a;
    cout << "Introduzca el segundo numero(b): " << endl;
    cin >> b;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;

    //Declaramos las diferentes operaciones aritmeticas
    suma = a + b;  
    resta = a - b;
    mult = a * b;
    div = a / b;
    modulo = a % b;


    //Mostramos resultados por pantalla
    cout << "-------Operaciones Matemáticas-------" << endl;
    cout << "La suma de 'a' y 'b' es: " << suma << endl;
    cout << "La resta de 'a' y 'b' es: " << resta << endl;
    cout << "La multiplicacion de 'a' y 'b' es: " << mult << endl;
    cout << "La division de 'a' y 'b' es: " << div << endl;
    cout << "La modulo de 'a' y 'b' es: " << modulo << endl;

    cout << "--------------------------------" << endl;
    cout << "Si has puesto unos datos cuyo resultado de la division contiene decimales (por ejemplo: a=5, b=2), habras notado que no se muestran los decimales. Esto es porque el tipo de datos de 'a' y 'b' es de tipo entero. Prueba a  cambiar el tipo de dato de 'a' y 'b' y vuelve a mirar el resultado. Eso si, tienes que comentar la operacion modulo ya que no puede realizarse con dos datos de tipo float" << endl;

    

    system("pause");//Parar el programa para que no cierre el terminal espontaneamente

    return 0;
}