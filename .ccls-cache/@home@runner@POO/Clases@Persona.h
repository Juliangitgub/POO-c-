#include "Bicicleta.h"
#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
  string nombre;
  Bicicleta miBicicleta;

public:
  Persona();
  Persona(string);
  void comprar(Bicicleta);
  void recorrer(double);
  void prestar(Persona);
  void devolver(Persona);
  void despinchar();
};

#else
class Bicicleta
#endif // PERSONA_H