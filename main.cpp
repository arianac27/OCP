#include <iostream>
using namespace std;

class Descuento {
public:
	virtual double calcularDescuento(double precio) {
		return 0;
	}
};

class DescuentoEstudiante : public Descuento {
public:
	double calcularDescuento(double precio) override {
		return precio * 0.15;
	}
};

class DescuentoAdultoMayor : public Descuento {
public:
	double calcularDescuento(double precio) override {
		return precio * 0.15;
	}
};

class Calculadora {
public:
	double calcularTotal(double precio, Descuento* descuento) {
		return precio - descuento->calcularDescuento(precio);
	}
};

int main() {
	Calculadora c;
	DescuentoEstudiante e;
	DescuentoAdultoMayor a;
	
	double precio = 20000;
	
	cout<<"Precio sin descuento: "<<precio<<endl;
	
	double totalEstudiante = c.calcularTotal(precio, &e);
	cout<<"Total con el descuento para estudiante: "<<totalEstudiante<<endl;
	
	double totalAdulto = c.calcularTotal(precio, &a);
	cout<<"Total con el descuento para adulto mayor: "<<totalAdulto<<endl;
	
	return 0;
}
