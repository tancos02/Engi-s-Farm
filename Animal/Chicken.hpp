#ifndef _CHICKEN_HPP
#define _CHICKEN_HPP

#include <iostream>
#include "EggProducer.hpp"
using namespace std;

class Chicken: public EggProducer{
    public:
    //ctor default
    Chicken();

    void printSound();
    bool isHungry();

    private:
    int timeHungryChicken; //lapar setelah timeLaparAyam
    bool isChickenAlive; //true jika ayam hidup, false jika mati
};

#endif