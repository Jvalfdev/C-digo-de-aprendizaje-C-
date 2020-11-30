#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double a, b, res;
    char op;
    string control;

    cout << "------------Calculadora V2-------------" << endl;
    cout << "---------------------------------------" << endl;
    do {
    cout << "Escriba su operaci\242n" <<endl;
    cout << "---------------------------------------" << endl;    
    cin >> a;
    cin >> op;
    cin >> b;
    switch (op)
    {
        case '+': res=a+b; cout << setprecision(3) << a << "+" << b << "=" << res << endl; break;
        case '-': res=a-b; cout << setprecision(3) << a << "-" << b << "=" << res << endl; break;
        case '*': res=a*b; cout << setprecision(3) << a << "*" << b << "=" << res << endl; break;
        case '/': res=a/b; cout << setprecision(3) << a << "/" << b << "=" << res << endl; break;
        default: break;
        
    }
    cout << "Si quiere continuar pulse 'c', \n Si quiere salir escriba 'exit'" << endl;
    cin >> control;
    }  

    while(control!="exit");
    
    



}