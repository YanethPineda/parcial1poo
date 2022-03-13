#include <iostream>
using namespace std;
class Estudiante{

	protected : string nombre,apellido,curso;
	
	protected : 
		Estudiante(){
		}
		Estudiante(string nom,string ape,string cur){
			nombre=nom;
			apellido=ape;
			curso=cur;
		}
};
	
