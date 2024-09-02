#include "Carro.h"
#include <iostream>

Carro ::Carro() {}

Carro::Carro(string matricula, int modelo, double precio) {

  this->matricula = matricula;
  this->modelo = modelo;
  this->precio = precio;
  cout << "Se creo un carro" << endl;
}
void Carro::precionuevo(double precio) {
  this->precio = precio;
  cout << "Se actualizo el precio a: " << precio << endl;
}
void Carro::getPrecio(){
  cout << "El precio es: " << precio << endl;
}
