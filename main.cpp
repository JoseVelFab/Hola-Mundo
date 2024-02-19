#include <iostream>
#include <Mascota.hpp>

using namespace std; 

int main(int argc, char const *argv[])
{

    Alimento a1(5);
    Alimento a2(2);

    Mascota m1;
    Mascota m2;

    m1.comer(a1);
    m2.comer(a2);

    cout<<"Mascota 1 Energia: "<< m1.leerfenergia() << endl
        <<"Mascota 2 Energia: "<< m2.leerfenergia() << endl;

    return 0;
}
