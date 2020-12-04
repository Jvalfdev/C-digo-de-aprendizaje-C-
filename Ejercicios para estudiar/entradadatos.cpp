/**
 * All rights reserved
 *
 * M.I.T License
 *
 * @summary Entrada de datos a C++
 * @author Jose Vallejo
 *
 * Created at     : 2020-12-04 09:25:46 
 * Last modified  : 2020-12-04 09:30:04
 */

#include <iostream>
 using namespace std;

 int main(){
     int num;//Variable int

     cout << "Escriba un numero" << endl;
     cin >> num;//Se usa 'cin' para realizar una entrada de datos y guardarla en la variable 'num' en este caso.

     cout << "El numero que ha escrito es: "<< num << endl;
     system("Pause");//Esto sirve para parar el programa y evitar que se cierre del tiron de
     return 0;
 }