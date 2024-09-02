#include "Bicicleta.h"
#include "Persona.h"
#include <iostream>
using namespace std;

int main() {

  Bicicleta bici = Bicicleta();
  Persona ana = Persona("Ana");
  Persona juanita = Persona("Juanita");
  juanita.comprar(bici);
  juanita.recorrer(20);
  juanita.prestar(ana);
  ana.recorrer(10);
  bici.pinchar();
  ana.devolver(juanita);
  juanita.despinchar();
  
  return 0;
  
}
