#include <iostream>
#include <iomanip>
#include <string>

class Estudiante {
private:
    std::string nombre;
    double nota;
    int edad;

public:
    Estudiante(std::string n, double nota_ini, int edad_ini) : nombre(n) {
        if(nota_ini >= 0.0 && nota_ini <= 100.0) {
            nota = nota_ini;
        } else {
            nota = 0;
        }

        if(edad_ini >= 1 && edad_ini <= 120) {
            edad = edad_ini;
        } else {
            edad = 0;
        }
    }

    std::string getNombre() const {
        return nombre;
    }

    double getNota() const {
        return nota;
    }

    int getEdad() const {
        return edad;
    }

    void setNota(double n) {
        if(n >= 0.0 && n <= 100.0) {
            nota = n;
            std::cout << "Nota actualizada: "
                      << std::fixed << std::setprecision(2)
                      << nota << std::endl;
        } else {
            std::cout << "Nota invalida." << std::endl;
        }
    }

    void setEdad(int e) {
        if(e >= 1 && e <= 120) {
            edad = e;
            std::cout << "Edad actualizada: " << edad << std::endl;
        } else {
            std::cout << "Edad invalida." << std::endl;
        }
    }

    void imprimir() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Nota  : "
                  << std::fixed << std::setprecision(2)
                  << nota << std::endl;
        std::cout << "Edad  : " << edad << std::endl;
    }
};




 int main() {
      Estudiante e("Luis", 85.0, 22);
      e.imprimir();

      e.setNota(150.0);   // debe rechazarse
      e.setNota(91.5);    // debe aceptarse
      e.setEdad(-3);      // debe rechazarse
      e.setEdad(23);      // debe aceptarse

      std::cout << "Nota final : "<< std::fixed << std::setprecision(2)<< e.getNota() << std::endl;
      std::cout << "Edad final : " << e.getEdad() << std::endl;
      return 0;
  }
