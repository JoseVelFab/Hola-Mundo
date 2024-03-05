#include <iostream>
#include <Mascota.hpp>
#include <list>

// using namespace std;

int main(int argc, char const *argv[])
{

    std::list<Mascota> mascotas;

    Alimento a1(5);
    Alimento a2(2);

    Mascota m1("Firulais");
    Mascota m2("Rojo");

    mascotas.push_back(m1);
    mascotas.push_back(m2);

    m1.comer(a1);
    m2.comer(a2);

    for (auto &&mascota : mascotas)
    {
        std::cout
            << mascota.leernombre()
            <<" : "
            << mascota.leerenergia()
            << std::endl;
    }

    return 0;
}
