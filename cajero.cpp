#include <iostream>//Se llama la biblioteca estandar

using namespace std;



float saldo; // Se fija la variable saldo, para que almacene el valor despues de operar

int oper();

int main()
{
    string usuario = "melanie";//Aqui introducimos el usuario que se pedirá
    string password = "cachopin1";//La contraseña requerida
    cout << "Ingrese su usuario" << endl;
    cin >> usuario;//Se le pide al usuario que ingrese usuario
    cout << "Ingrese su password" << endl;
    cin >> password;//Aquí que ingrese contraseña
    if (usuario == "melanie" && password == "cachopin1")/*Si el usuario y la contraseña corresponden 
    con los definidos, da la bienvenida y empieza con el metodo para operar */ 
    {
        cout << "Los datos son correctos" << endl;
        cout << "Bienvenida" << endl;
        oper();
    }/*Si no son correctos los datos; limpia la consola, Te muestra que los datos no son correctos
    y te manda de nuevo a 'main()' para que vuelvas a introducir los datos*/
    else
    system("CLS");
    cout << "Los datos son incorrectos" << endl;
    
    main();
    
}

int oper()// Este es el método en el que tenemos un menu y unas operaciones
{
    int opc;//Variable para la opcion elegida
    float ret;//Variable para retiro de saldo
    float ing;//Variable para ingreso de saldo
       
    cout << "Elija una opcion" << endl;
    cout << "1) Consultar Saldo" << endl;
    cout << "2) Sacar dinero" << endl;
    cout << "3) Ingresar dinero" << endl;
    cout << "4) Salir" << endl;
    cin >> opc;//Aquí introducimos la opcion que queremos que se guarda en 'opc'
    system("CLS");
    switch (opc)//Estructura de control 'switch' dependiendo del valor de 'opc'
    {
        case 1: //Si 'opc=1' se muestra el saldo
           cout << "Su saldo es: " << saldo << endl; break;

        case 2: //Si'opc=2' se inicia operador de sacar dinero
           cout << "Que cantidad desea sacar?" << endl;
           cin >> ret;// Aqui introducimos la cantidad a retirar
           if (ret>saldo)//Si la cantidad a retirar es mayor que el saldo, no deja sacar.
           {
               //Se muestra mensaje de que no deja sacar por saldo insuficiente            
               cout << "No dispone de saldo disponible" << endl;

           }
           else//Si la cantidad a retirar es menos que el saldo, se inicia la operacion
           {
               saldo -= ret;//Operacion sencilla de restar al saldo total la cantidad a retirar
           }
           break;
        case 3: //Si 'opc=3' se inicia la operacion de ingreso de saldo
           cout << "Cuanto dinero desea ingresar?" << endl;
           cin >> ing;//Se ingresa la cantidad que queremos ingresar
           saldo +=ing;//Operacion sencilla de sumarle al saldo la cantidad a ingresar
           break;

        case 4: //Si 'opc=4' se sale del programa
           cout << "Adios" << endl;
           return 0;

        default: 
           cout << "Escriba una opción correcta" << endl;
           break;          
           
           
    }
    /*Al finalizar la estructura switch se vuelve a invocar al metodo de operaciones 
    para seguir operando hasta que se decida salir*/
    oper();
}

