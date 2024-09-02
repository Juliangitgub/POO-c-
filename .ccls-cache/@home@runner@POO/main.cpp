#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;
// siempre con mayuscula inicial las clases::Clase
/*
Clase-> objetos-> atributos-> metodos

*/

string leer(string mensaje) {
  string aux;
  cout << mensaje << endl;
  getline(cin, aux);
  return aux;
}

int main() {

  cout << "Hola, bienvenido a nuestra sede comunal" << endl;
  cout << "\nPara verificar necesitamos los siguientes datos: \n" << endl;
  string nombre = leer("\nnombre: ");
  string apellido = leer("\napellido: ");
  int numeroid = stoi(leer("\nnumero de identificacion: "));
  int dia = stoi(leer("Dia de nacimiento: "));
  int mes = stoi(leer("Mes de nacimiento"));
  int año = stoi(leer("Año de nacimiento: "));
  double estatura = stod(leer("Estatura: "));
  int peso = stoi(leer("Peso: "));

  Persona identidades =Persona(nombre, apellido, numeroid, dia, mes, año, estatura, peso);
  int diaHoy = stoi(leer("Dia de hoy: "));
  int mesHoy= stoi(leer("Mes de hoy: "));
  int añoHoy= stoi(leer("Año de hoy: "));
  identidades.edad(diaHoy, mesHoy, añoHoy);
  identidades.imc();
  return 0;
}
