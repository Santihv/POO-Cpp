

#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha{
	private:				// Atributos
		int dia, mes, anio;
	public:					// Métodos
		Fecha(int,int,int);	// Constructor1
		Fecha(long);		// Constructor2 
		void mostrarFecha();
};

// Inicializar Constructor1
Fecha::Fecha(int _dia, int _mes, int _anio){
	anio = _anio;
	mes = _mes;
	dia = _dia;
}

// Inicializar Constructor2 para fechas del estilo 20220227 (añomesdia)
// No importa que se repita el nombre del Constructor1
Fecha::Fecha(long fecha){
	anio = int(fecha / 10000);
	mes = int((fecha - anio*10000)/100);
	dia = int(fecha - anio*10000 - mes*100);
}

void Fecha::mostrarFecha(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){

	Fecha hoy(27,2,2022);
	hoy.mostrarFecha();
	Fecha ayer(20220226);
	ayer.mostrarFecha();

	system("pause");
	return 0;
}