#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private:						// Atributos
		int edad;
		string nombre;
	public:							// Métodos
		Persona(int, string);		// Constructor
		void mostrarDatos();
};

// Contructor de la clase padre
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

// Definición de la clase hija
class Alumno : public Persona{		// De esta manera se *hereda* los métodos públicos de la clase Persona
	private:						// La clase hija tiene sus propios atributos
		string carnet;
		float nota;
	public:
		Alumno(int,string,string,float);	// El constructor de la clase hija tiene los atributos heredados más los nuevos (van en orden)
		void mostrarAlumno();
};

// Constructor de la clase hija
Alumno::Alumno(int _edad, string _nombre, string _carnet, float _nota) : Persona(_edad,_nombre){	// Hereda los atributos de la clase padre en vez de volver a pedirlos
	carnet = _carnet;
	nota = _nota;
}

void Alumno::mostrarAlumno(){
	mostrarDatos();
	cout<<"Carnet: "<<carnet<<endl;
	cout<<"Nota: "<<nota<<endl;
}

int main(){

	string nombreP1;
	int edadP1;
	cout<<"Nombre de la persona: ";
	cin>>nombreP1;
	cout<<"Edad de la persona: ";
	cin>>edadP1;

	Persona P1(edadP1,nombreP1);
	P1.mostrarDatos();

	Alumno alumno1(21, "Patricio", "C02345", 85.45);
	alumno1.mostrarAlumno();

	system("pause");
	return 0;
}