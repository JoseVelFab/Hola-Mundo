#pragma once
#include<Alimento.hpp>
class Mascota
{
private:
    /* data */

    int Energia, Felicidad;

public:
    Mascota() {
        this->Energia=0;
        this->Felicidad=0;}

    ~Mascota() {}

    void comer(Alimento alimento){
        Energia += alimento.extraerenergia();}
    
    void jugar(){Energia -= 1;
        Felicidad += 1;}
    
    int leerfelicidad(){
        return this->Felicidad;}

    int leerfenergia(){
        return this->Energia;}
};