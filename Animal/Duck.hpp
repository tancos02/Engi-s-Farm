#ifndef _DUCK_HPP
#define _DUCK_HPP

#include <iostream>
#include "EggProducer.hpp"
#include "MeatProducer.hpp"
using namespace std;

class Duck: virtual public EggProducer, virtual public MeatProducer{
    public:
    //ctor default
    Duck();

    void printSound();
    bool isHungry();

    private:
    int timeHungryDuck; //lapar setelah timeLaparBebek
    bool isDuckAlive; //true jika bebek hidup, false jika mati
};

#endif