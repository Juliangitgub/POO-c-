#include "Persona.h"
#include <string>
using namespace std;

class Sedecomunal {
private:
  string calle;
  Persona unapersona;

public:
  Sedecomunal();
  void mostrarBienvenida();
  void ingresarPersona();
  void determinarCategoriaEdad();
  void mostrarIMC();
  void mostrarCantidadanhos();
  ~Sedecomunal();
};