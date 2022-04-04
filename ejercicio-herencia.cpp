/* Ejercicio #3: Realice un programa en C++ de tal manera que se construya una solución para la jerarquía (herencia) de clases mostrada
en la siguiente figura:

						Persona
					   /	   \
					  /         \
				 Empleado    Estudiante
								 |
								 |
							Universitario
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

// Clase Origen (Padre o abuelo más bien je)
class Persona{
	private:						// Atributos
		int edad;
		string nombre;
	public:							// Métodos
		Persona(int, string);		// Constructor
		void mostrarPersona();
};

// Constructor de clase origen
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

// Definición de la primera clase hija
class Empleado : public Persona{
	private:
		float sueldo;					// Nuevo atributo de la clase hija
	public:
		Empleado(int, string, float);	// Constructor de la clase hija
		void mostrarEmpleado();
};

// Constructor de la clase hija
Empleado::Empleado(int _edad, string _nombre, float _sueldo) : Persona(_edad, _nombre){
	sueldo = _sueldo;
}

void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout<<"Sueldo: "<<sueldo<<endl;
}

// Definición de la segunda clase hija
class Estudiante : public Persona{
	private:									// Nuevo atributo de la clase hija
		float nota;
	public:										// Métodos de la clase hija
		Estudiante(int, string);				// En el constructor no se va a definir la nota
		void mostrarEstudiante();
		void setNota(float);					// Setter de la nota
};

// Constructor de la clase hija/padre
Estudiante::Estudiante(int _edad, string _nombre) : Persona(_edad, _nombre){
	// El nombre y la edad los hereda, pero la nota se define después
}

// Modificador de la nota
void Estudiante::setNota(float _nota){
	nota = _nota;
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();							// Método heredado
	cout<<"Nota: "<<nota<<endl;					// Nueva acción del método
}


// Definción de la clase hija de Estudiante (nieta de Persona)
class Universitario : public Estudiante{
	private:									// Nuevos atributos de la clase nieta
		string carnet;
	public:										// Nuevos métodos de la clase nieta
		Universitario(int, string, string);		// Hereda el nombre y la edad, pero no la nota porque esta se define luego
		void mostrarUniversitario();
};

// Constructor de la clase hija (o nieta)
Universitario::Universitario(int _edad, string _nombre, string _carnet) : Estudiante(_edad, _nombre){
	carnet = _carnet;							// Hereda el nombre y la edad y define el carnet
}

void Universitario::mostrarUniversitario(){
	mostrarEstudiante();						// Hereda el método de la clase padre
	cout<<"Carnet: "<<carnet<<endl;
}

int main(){

	Persona p1(38, "Carlitos");
	p1.mostrarPersona();

	Empleado bsc(52, "Mario", 2543604.5);
	bsc.mostrarEmpleado();

	Estudiante cole(14, "Kousei");
	cole.setNota(96.5);
	cole.mostrarEstudiante();

	Universitario ucr(22, "Santiago", "B73737");
	ucr.setNota(85.5);
	ucr.mostrarUniversitario();

	system("pause");
	return 0;
}