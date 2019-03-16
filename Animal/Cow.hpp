#ifndef _COW_HPP
#define _COW_HPP

#include <iostream>
#include "MeatProducer.hpp"
#include "MilkProducer.hpp"
using namespace std;

class Cow: public MeatProducer, public MilkProducer{
    public:
    //ctor deafult
    Cow();

    void printSound();
    bool isHungry();

    private:
    int timeHungryCow; //lapar setelah timeLaparSapi
    bool isCowAlive; //true jika sapi hidup, false jika mati
};

#endif