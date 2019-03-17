#ifndef _CHICKEN_HPP
#define _CHICKEN_HPP

#include <iostream>
#include "EggProducer.hpp"
#include "MeatProducer.hpp"

using namespace std;

class Chicken: virtual public EggProducer, virtual public MeatProducer{
    public:
    //ctor default

    void printSound();
    bool isHungry();
    void cek();

    private:
    int timeHungryChicken; //lapar setelah timeLaparAyam
    bool isChickenAlive; //true jika ayam hidup, false jika mati
};

#endif