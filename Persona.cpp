#include "Persona.h"
#include <iostream>
using namespace std;
Persona::Persona() {}

Persona::Persona(string nombre, string apellido, int numeroid, int dia, int mes,
                 int año, double estatura, double peso) {
  this->nombre = nombre;
  this->apellido = apellido;
  this->numeroid = numeroid;
  this->dia = dia;
  this->mes = mes;
  this->año = año;
  this->estatura = estatura;
  this->peso = peso;
  cout<<"Se creo un usuario con exito"<<endl;
}
void Persona::imc() {
  cout << "su IMC es: " << peso / (estatura * estatura) << endl;
}
void Persona::edad(int dia, int mes, int año) {
  int valor;
  if ((this->dia >= dia) && (this->mes >= mes)) {
    valor = año - 1 - (this->año);
    cout << "su edad es: " << valor << endl;
  } else {
    valor = año - (this->año);
    cout << "su edad es: " << valor << endl;
  }
  // en este espacio determinaremos que categoria es niño,joven,adulto,anciano
  if (valor < 12 && valor >= 0)
    cout << "es un niño" << endl;

  if (valor >= 12 && valor < 18)
    cout << "es un joven" << endl;
  if (valor >= 18 && valor < 60)
    cout << "es un adulto" << endl;
  if (valor >= 60)
    cout << "es un anciano" << endl;
}
