#ifndef _EGGPRODUCER_HPP
#define _EGGPRODUCER_HPP

#include <iostream>
#include "Animal.hpp"
using namespace std;

class EggProducer: virtual public Animal{
    public:
    EggProducer();
    
    protected:
    int egg;
};

#endif