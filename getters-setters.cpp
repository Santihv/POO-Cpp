#include<iostream>
#include<stdlib.h>
using namespace std;

class Punto{

	private:						// Atributos
		int x,y,z;
	public:							// Métodos
		Punto(int);					// Creo el Constructor incompleto para luego rellenarlo
		void setPunto(int,int);		// Método setter o modificador
		int getPuntoX();			// Métodos getter o constructores
		int getPuntoY();
		int getPuntoZ();
};

Punto::Punto(int _z){					// Inicializo el constructor incompleto para luego rellenarlo
	z = _z;
};

void Punto::setPunto(int _x, int _y){	// Inicializo el setter (permite modificar los datos encapsulados)
	x = _x;
	y = _y;
}

int Punto::getPuntoX(){					// Inicializo el getter (solo se usa para extraer los datos encapsulados)
	return x;
}

int Punto::getPuntoY(){
	return y;
}

int Punto::getPuntoZ(){
	return z;
}


int main(){

	Punto puntito(6);					// Si el objeto se crea vacío, no hay que poner los paréntesis
	int continuar = 0;

	while(continuar==0){
	int valorX,valorY;
	cout<<"Valor de x: ";
	cin>>valorX;
	cout<<"Valor de y: ";
	cin>>valorY;

	puntito.setPunto(valorX,valorY);
	cout<<"Punto: "<<puntito.getPuntoX()<<", "<<puntito.getPuntoY()<<", "<<puntito.getPuntoZ()<<endl;
	cout<<"Continuar...? ";
	cin>>continuar;
	}

	system("pause");
	return 0;
}