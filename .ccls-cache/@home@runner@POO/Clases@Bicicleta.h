#ifndef BICILETA_H
#define BICILETA_H
#include <string>

class Bicicleta {
private:
  std::string estado;
  double km_recorridos;

public:
  Bicicleta();

  void pedalear(double);
  void cambiarEstado();
  void pinchar();

};

#else
class Bicicleta;
#endif // BICICLETA_H
