#include "Bicicleta.h"
#include <iostream>
using namespace std;

Bicicleta::Bicicleta() {}

void Bicicleta::pedalear(double km) {
  km_recorridos += km;
  cout << "La bicicleta modifico sus km recorridos en " << km
       << " y ahora tiene " << km_recorridos << " km recorridos" << endl;
}
void Bicicleta::cambiarEstado() {
  if (estado == "pinchada")
    estado = "despinchada";
  cout << "La bicicleta se ha despinchado" << endl;
}
void Bicicleta::pinchar() {
  estado = "pinchada";
  cout << "La bicicleta esta en estado: " << estado << endl;
}
