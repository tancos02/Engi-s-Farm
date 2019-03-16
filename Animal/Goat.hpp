#ifndef _GOAT_HPP
#define _GOAT_HPP

#include <iostream>
#include "MeatProducer.hpp"
using namespace std;

class Goat: public MeatProducer{
    public:
    //ctor default
    Goat();

    void printSound();
    bool isHungry();

    private:
    int timeHungryGoat; //lapar setelah timeLaparKambing
    bool isGoatAlive; //true jika kambing hidup, false jika mati
};

#endif