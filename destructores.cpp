#include<iostream>
#include<stdlib.h>
using namespace std;

class Perro{
	private:						// Atributos
		string nombre, raza;
	public:							// Métodos
		Perro(string, string);
		~Perro();					// Destructor
		void datos();
		void jugar();
};

// Constructor
Perro::Perro(string _nombre, string _raza){
	nombre = _nombre;
	raza = _raza;
}

// El destructor va siempre vacío
Perro::~Perro(){

}

void Perro::datos(){
	cout<<"El perro se llama "<<nombre<<" y es raza "<<raza<<"."<<endl;
}

void Perro::jugar(){
	cout<<nombre<<" esta jugando :D"<<endl;
}

int main(){

	string nombre, raza;
	cout<<"Nombre del perro: ";
	getline(cin,nombre);
	cout<<"Raza del perro: ";
	getline(cin,raza);

	Perro doge(nombre,raza);
	doge.datos();
	doge.jugar();
	doge.~Perro();					// Destruye el objeto (lo elimina)


	system("pause");
	return 0; 
}