//Clases en C++

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private:			// Atributos de la persona encapsulados porque están privados
		int edad;
		string nombre;
	public:				// Métodos, solo ellos pueden interactuar con los atributos al estar privados o encapsulados
		Persona(int,string); // Constructor que inicializa los atributos de la clase
		void leer();
		void correr();
};	// muy importante el ; al cerrar la llave

// Constructor
Persona::Persona(int _edad,string _nombre){ // inicializa los atributos (clase::atributo)
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){	// Al atributo no es necesario pasarle parámetros porque están dentro de la misma clase
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<", tengo "<<edad<<" años y estoy corriendo una maratón"<<endl;
}


int	main(){
	Persona p1 = Persona(22,"Santiago");
	p1.leer();
	Persona p2(38,"Carlitos Tévez");		// El constructor también se puede inicializar directamente
	p2.correr();

	system("pause");
	return 0;
}