#pragma once
#include<Alimento.hpp>
#include<string>

std::string nombre;

class Mascota
{
private:
    /* data */

    int Energia, Felicidad;
    std::string nombre;

public:
    Mascota(std::string nombre) 
    {
        this->Energia=0;
        this->Felicidad=0;
        this->nombre = nombre;
    }

    ~Mascota() {}

    void comer(Alimento alimento){
        Energia += alimento.extraerenergia();}
    
    void jugar(){Energia -= 1;
        Felicidad += 1;}
    
    int leerfelicidad(){
        return this->Felicidad;}

    int leerenergia(){
        return this->Energia;}

    std::string leernombre(){
        return this->nombre;
    }
};