#include "Persona.h"

Persona::Persona() { nombre = ""; }
Persona::Persona(string nombre) { this->nombre = nombre; }

void Persona::comprar(Bicicleta bicicleta) {

  miBicicleta = bicicleta;
  cout << nombre << " Compró una bicicleta " << endl;
}
void Persona::recorrer(double km) {
  miBicicleta.pedalear(km);
  cout << nombre << " recorrio " << km << " con la bicicleta" << endl;
}
void Persona::prestar(Persona prestado) {
  cout << nombre << " Le prestó la bicicleta a " << prestado.nombre << endl;
}
void Persona::devolver(Persona unaP) {
  cout << nombre << " Le devolvio la bicicleta a " << unaP.nombre << endl;
}
void Persona::despinchar() { miBicicleta.cambiarEstado(); }
