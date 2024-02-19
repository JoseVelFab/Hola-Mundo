
#pragma once

class Alimento
{
private:
    /* data */
    int Energia;

public:
    Alimento(int Energia) {
        this->Energia=Energia;}

    ~Alimento() {}

    int extraerenergia(){
        this->Energia=Energia;
        return Energia;
    }
};