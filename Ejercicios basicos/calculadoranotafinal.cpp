/**
 * All rights reserved
 *
 * M.I.T License
 *
 * Calculadora para calcular nota final en ciclo DAM en UAX
 *
 * @summary Calculadora para nota final
 * @author Jose Vallejo
 *
 * Created at     : 2020-12-04 10:50:55 
 * Last modified  : 2020-12-04 12:13:22
 */

#include <iostream>

using namespace std;

int main (){
    //Declaramos las variables que vamos a utilizar, serán tipo 'float' porque contendran decimales
    float test1, test2, test3, test4, test5;
    float feed1, feed2, feed3, feed4, feed5;
    float examen;
    float n2;
    float final;

    /*Durante todo el codigo encontraras que en lugar de tildes hay un codigo, eso es el codigo ascii para poner
    caracteres especiales*/

    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "Hola! Este programa te ayudar\xA0 a calcular la nota final del m\242dulo correspondiente." << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "Empecemos por los feedbacks. Si alg\xA3n feedback no lo has hecho pon de nota un '1'" << endl;
    cout << "Introduce la nota del Feedback 1: " << endl;
    cin >> feed1;
    cout << "Introduce la nota del Feedback 2: " << endl;
    cin >> feed2;
    cout << "Introduce la nota del Feedback 3: " << endl;
    cin >> feed3;
    cout << "Introduce la nota del Feedback 4: " << endl;
    cin >> feed4;
    cout << "Introduce la nota del Feedback 5: " << endl;
    cin >> feed5;

    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "Ahora continuamos con los Test de Autoevaluaci\242n. Al igual que con los Feedback si no ha hecho alguno de los test ponga de nota un '1'" << endl;
    cout << "Escribe la nota del Test de Autoevaluaci\242n 1: " << endl;
    cin >> test1;
    cout << "Escribe la nota del Test de Autoevaluaci\242n 2: " << endl;
    cin >> test2;
    cout << "Escribe la nota del Test de Autoevaluaci\242n 3: " << endl;
    cin >> test3;
    cout << "Escribe la nota del Test de Autoevaluaci\242n 4: " << endl;
    cin >> test4;
    cout << "Escribe la nota del Test de Autoevaluaci\242n 5: " << endl;
    cin >> test5;
    //Aqui calculamos la nota N2 que es la media de todas las notas de Feedback y Tests
    n2 = (test1 + test2 + test3 + test4 + test5 + feed1 + feed2 + feed3 + feed4 + feed5) / 10;
    cout << "Tu nota N2 es: " << n2 << endl;

    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "Cual fu\x82 tu nota en el examen?" << endl;
    cin >> examen;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    //Condicional, si la nota supera el 6, se aplica la N2
    if(examen >= 6){
        final = examen +(n2/10);
        cout << "Tu nota final es: " << final << endl; 
        
    }
    else//Si la nota no supera el 6, simplemente muestra la nota del examen
    {
        cout << "Tu nota final es: " << examen<< endl;
        cout << "Porque si no sacas mas de un 6 en el examen no cuenta la N2, lo siento" << endl;
    }
    
    //El system("pause") hace que se detenga el flujo del programa y no cierre el terminal espontaneamente
    system("pause");
    
    return 0;
}

