// Ejercicio #1 Clases
// Construya una clase llamada rectángulo que tenga los siguientes atributos: largo y ancho, y los siguientes métodos: perimetro() y area()

#include<iostream>
#include<stdlib.h>
using namespace std;

class Rectangulo{
	private:		// Atributos
		int largo;
		int ancho;

	public:			// Métodos
		Rectangulo(int, int);	// Constructor
		int perimetro();		
		int area();
};

Rectangulo::Rectangulo(int _largo, int _ancho){	// Inicializa el constructor
	largo = _largo;
	ancho = _ancho;
}

int Rectangulo::perimetro(){
	int perimetro = 2*largo + 2*ancho;
	return perimetro;
}

int Rectangulo::area(){
	int area = largo*ancho;
	return area;
}

int main(){

	Rectangulo rect(5,7);	// Creo un objeto rectángulo de largo 5 y ancho 7
	cout<<"El perimetro del rectangulo es "<<rect.perimetro()<<endl;
	cout<<"El area del rectangulo es "<<rect.area()<<endl;

	system("pause");
	return 0;
}