#include <iostream>
#include <iomanip>



using namespace std;

int main(void)
{
    
    double res;
    float n1, n2;
    int op;
    cout << "----Calculadora-----" << endl;
    cout << "--------------------------------"<< endl;
    cout << "Selecciona el primer n\243mero" << endl; cin >> n1;
    cout << "Selecciona el segundo n\243mero" << endl; cin >> n2;
    cout << "Selecciona la operaci\242n a realizar\n 1)Suma\n 2)Resta\n 3)Divisi\242n\n 4)Multiplicaci\242n" << endl;
    cin >> op;
    switch (op)
    {
        
        case 1: res=n1+n2; cout << setprecision(2) << "La Suma es: " << res << endl; break;
        case 2: res=n1-n2; cout << setprecision(2) << "La Resta es: " << res << endl; break;
        case 3: res=n1/n2; cout << setprecision(2) << "La Divisi\242n es: " << res << endl; break;
        case 4: res=n1*n2; cout << setprecision(2) << "La Multiplicaci\242n es: " << res << endl; break;
        default: break;
        
    }
    system("pause");


}