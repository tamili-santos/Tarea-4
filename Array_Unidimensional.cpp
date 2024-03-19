#include <iostream>
using  namespace std;
int main() {
    string semana[7]= {"Lunes","Martes","Miercol","jueves", "Viernes", "Sabado" , "Domingo"} ;

    semana[3] = "Jueves";
    for  (int i=0;i<7;i++) {
        cout << semana [i]<<endl;
        }
        system("PAUSE");
	return 0;
}


    /*string nombre;
    int dato;
    cout<<"Ingrese su dato: ";
    cin>>dato;
    cin.ignore();
    cout<<"Ingrese su nombre: ";
    getline(cin,nombre);
    cout<<nombre<<endl;*/
