/**
 * All rights reserved
 *
 * M.I.T License
 *
 * long description for the file
 *
 * @summary short description for the file
 * @author Jose Vallejo
 *
 * Created at     : 2020-12-08 22:01:48 
 * Last modified  : 2020-12-08 22:01:48 
 */


#include <iostream>
#include <string>

using namespace std;

int main(){
    
    cout << "Introduzca su usuario y contrasena, tiene 3 intentos" << endl;
    for (int i = 0; i < 3 ; i++){
        string name, password;
        string iname = "mel";
        string ipassword = "4321";
       
        
        cout << "Introduce tu usuario"<<endl;
        cin >> name;
        if ( name == iname ){
            cout << "Introduce tu contrasena" << endl;
            
            cin >> password;
            if ( password == ipassword ){
                cout << "Datos correctos" << endl;
                
            }
            else
            {
                cout << "Contrasena incorrecta" << endl;
            }
            
            
            
        }
        else 
        cout << "Usuario incorrecto" << endl;
        system("pause");
        


    }

}

