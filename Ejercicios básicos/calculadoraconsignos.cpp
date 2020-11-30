
#include <iostream> //Librería estandar para operaciones de entrada y salida
#include <iomanip> // Manipulador de datos, incluido para usar 'setprecision'

using namespace std;

int main(void)
{
    double a, b, res; //Declaracion de variables tipo doble
    char op; // Declarar variable tipo 'char' para los operadores matematicos
    string control; // Variable string para la funcion 'salir'

    cout << "------------Calculadora V2-------------" << endl;
    cout << "---------------------------------------" << endl;
    do {// Inicio del bucle do-while
    cout << "Escriba su operaci\242n" <<endl;
    cout << "---------------------------------------" << endl;    
    cin >> a;//Se introduce el primer valor
    cin >> op;// Se introduce el operador matematico
    cin >> b;// Se introduce el segundo operador matematico
    switch (op)//Estructura de control en base a lo introducido en el operador matematico.
    {
        //Si en el operador matematico (op) se ha introducido el caracter '+', se realiza el siguiente caso
        case '+': res=a+b; cout << setprecision(3) << a << "+" << b << "=" << res << endl; break;
        //Si es una resta '-' se realiza la siguiente
        case '-': res=a-b; cout << setprecision(3) << a << "-" << b << "=" << res << endl; break;
        //Si es una multiplicacion '*' esta
        case '*': res=a*b; cout << setprecision(3) << a << "*" << b << "=" << res << endl; break;
        //Si es una division '/' esta
        case '/': res=a/b; cout << setprecision(3) << a << "/" << b << "=" << res << endl; break;
        /*Con el 'default : break;' estamos diciendo que, si no se introducen ninguno de los valores
        ya mencionados, acabe la operación 'switch' al usar el 'break'*/
        default: break;
        
    }/* Una vez finalizado el switch se le pregunta al usuario si quiere continuar
    o si quiere salir*/
    cout << "Si quiere continuar pulse 'c', \n Si quiere salir escriba 'exit'" << endl;
    cin >> control;// Aqui se introduce en la variable 'control' lo que el usuario quiere 
    }  
    /*Si el usuario escribe 'exit' el 'while' continuará con el flujo de ejecución y
     terminará con el programa. Si escribe cualquier otra cosa (aunque le hayamos puesto que pulse 'c')
     El flujo de ejecución volverá al 'do'*/
    while(control!="exit");
    
    



}