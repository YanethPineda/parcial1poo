#include "Estudiante.cpp"
#include <iostream>
using namespace std;

class Estudiantes : Estudiante{
	private : int codigo, promedio;
	
	public: 
	Estudiantes (){
		
	}
	
	Estudiantes (string nom,string ape,string cur,int cod, int pro) : Estudiante(nom,ape,cur){
		codigo = cod;
		promedio = pro;
	}
	void mostrar(){
		cout<<"____________________________________________________________________________"<<endl;
		cout<<codigo<<" | "<<nombre<<" | "<<apellido<<" | "<<curso<<" | "<<promedio<< " | ";
		
		if (promedio>=61){
			cout<<("APROBADO");
		}else{
			cout<<("REPROBADO");
		}
		
	}
		
};
