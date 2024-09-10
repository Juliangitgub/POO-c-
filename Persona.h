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
  Persona();//constructor vacio
  Persona(string, string, int, int, int, int, double, double); //constructor con parametros
  double imc();
  int getEdad();
  string getInfoPersona();
  void edad(int, int, int);
  ~Persona();//destructor
};