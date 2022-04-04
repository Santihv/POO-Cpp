/* Ejercicio #2: Construya una clase Tiempo que contenga los siguientes atributos enteros: horas, minutos y segundos. Haga que la
clase contenga 2 constructores, el primero deberá tener 3 parámetros Tiempo(int, int, int) y el segundo solo tendrá un campo que
serán los segundos y desensamble el número entero largo en horas, minutos y segundos.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Tiempo{

	private:							// Atributos
		int horas, minutos, segundos;
	public:								// Métodos
		Tiempo(int, int, int);			// Constructor1 que recibe el tiempo como horas, minutos y segundos
		Tiempo(long);					// Constructor2 que recibe el tiempo en segundos
		void mostrarTiempo();
};

// Inicializar Constructor1
Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

// Inicializar Constructor2
Tiempo::Tiempo(long tiempo){
	horas = int(tiempo/3600);
	minutos = int((tiempo - horas*3600)/60);
	segundos = int(tiempo - horas*3600 - minutos*60);
}

void Tiempo::mostrarTiempo(){
	cout<<"El programa se ejecutó durante "<<horas<<" horas, "<<minutos<<" minutos y "<<segundos<<" segundos."<<endl;
}

int main(){

	Tiempo ejecucion1(1,27,45);
	Tiempo ejecucion2(1466);
	ejecucion1.mostrarTiempo();
	ejecucion2.mostrarTiempo();

	system("pause");
	return 0;
}