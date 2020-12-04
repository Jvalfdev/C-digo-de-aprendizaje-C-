#include <iostream>

using namespace std;

int main (void) {
    int e;
    cout << "Introduce tu edad" << endl;
    cin >> e;
    if (e>=18)
    {
        cout << "Eres mayor de edad" << endl;
    }
    else {
        cout << "Eres menor de edad" << endl;
    }
    system("pause");

}