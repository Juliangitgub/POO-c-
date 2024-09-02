#include <string>
using namespace std;
class Carro {
private:
  string matricula;
  int modelo;
  double precio;

public:
  Carro();
  Carro(string, int, double);
  void precionuevo(double);
  void getPrecio();
};
