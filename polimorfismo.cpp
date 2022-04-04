#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private:								// Atributos
		int edad;
		string nombre;
	public:									// Métodos
		Persona(int,string);				// Constructor
		virtual void mostrar();				// virtual indica que hay polimorfismo y solo se pone en la clase padre
};

Persona::Persona(int _edad, string _nombre){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrar(){					// Al definir el método no hace falta repetir la palabra virtual
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

class Alumno : public Persona{				// Clase que hereda de la clase Persona
	private:
		float nota;
	public:
		Alumno(int, string, float);
		void mostrar();
};

Alumno::Alumno(int _edad, string _nombre, float _nota) : Persona(_edad, _nombre){
	nota = _nota;							// Hereda la edad y el nombre
}

void Alumno::mostrar(){
	Persona::mostrar();						// De esta manera aplica el polimorfismo con el método mostrar de la clase padre
	cout<<"Nota final: "<<nota<<endl;
}

class Profesor : public Persona{
	private:
		string materia;
	public:
		Profesor(int, string, string);
		void mostrar();						// También hereda el método mostrar()
};

Profesor::Profesor(int _edad, string _nombre, string _materia) : Persona(_edad, _nombre){
	materia = _materia;
}

void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"Materia: "<<materia<<endl;
}


int main(){

	// Aquí se usan punteros *IMPORTANTE REVISAR CÓMO FUNCIONAN* 
 
 	Persona *vector[3];					// De esta manera se crean tres objetos de la clase persona

 	vector[0] = new Alumno(22, "Santiago", 85.5);
 	vector[1] = new Alumno(24, "Andrea", 97.5);
 	vector[2] = new Profesor(38, "Carlitos", "Fuchibol");

 	vector[0]->mostrar();				// La -> es como poner un punto en hola.campo:
 	cout<<"\n";
 	vector[1]->mostrar();
 	cout<<"\n";
 	vector[2]->mostrar();				// Mismo método de los otros objetos, pero la acción se realiza diferente


	system("pause");
	return 0;
}