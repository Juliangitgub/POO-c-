#include <string>

using namespace std;

class Persona {
private:
  string nombre;
  string apellido;
  int numeroid;
  int dia;
  int mes;
  int año;
  double estatura;
  double peso;

public:
  Persona();
  Persona(string, string, int, int, int, int, double, double);
  void imc();
  void edad(int, int, int);
};