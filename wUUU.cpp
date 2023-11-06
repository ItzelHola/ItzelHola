#include <iostream>
using namespace std;
int main(){
	int var = 5;
	
	//declaración de la variable puntero
	int*pointVar;
	
	//almacena al direccion de var
	pointVar = &var;
	//imprime el valor de var
	cout << "Direccion de la variable var (&var) = "<< &var << endl << endl;
	//imprime el apuntador pointVar
	cout << "Cambia el valor de var a 7:" << endl << endl;
	
	//Cambia el valor de var a 7
	var = 7;
	
	//imprime el valor de var
	cout <<"var = "<< var << endl << endl;
	
	//imprime el apuntador pointVar
	cout << "*pointVar = " << *pointVar << endl << endl;
	
	cout << "Cambia el valor de *pointVar a 16:" << endl;
	
	//cambia el valor de var a 16
	*pointVar = 16;
	
	//imprime el valor de var
	cout << "Apuntador pointVar =" << pointVar << endl;
	//imprime el contenido del apuntador pointVar
	cout << "*pointVar = " << *pointVar << endl;
	//imprime el valor de var
	cout << "var = " << var << endl << endl;
	return 0;
}
