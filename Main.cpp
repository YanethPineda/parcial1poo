#include "Estudiantes.cpp"
#include <iostream>
using namespace std;
main(){
	string nombre,apellido,curso;
	int codigo,promedio,n1,n2,n3,n4;
	char op='S';
	while(op=='s' || op=='S'){	
	
	cout<<"Ingresar Codigo: ";
	cin>>codigo;
	cin.ignore();
	cout<<"Ingresar Nombre: ";
	getline(cin,nombre);
	cout<<"Ingresar Apellido: ";
	getline(cin,apellido);
	cout<<"Ingresar Curso: ";
	cin>>curso;
	cout<<"Ingresar Nota 1: ";
	cin>>n1;
	cout<<"Ingresar Nota 2: ";
	cin>>n2;
	cout<<"Ingresar Nota 3: ";
	cin>>n3;
	cout<<"Ingresar Nota 4: ";
	cin>>n4;

	promedio = (n1+n2+n3+n4)/4;
	Estudiantes obj = Estudiantes(nombre,apellido,curso,codigo,promedio);
	obj.mostrar();
	
	
	cout<<"\n Desea ingresar otro Estudiante? (s/n)";
	cin>>op;
}
system("cls");
return 0;

}
		

	
