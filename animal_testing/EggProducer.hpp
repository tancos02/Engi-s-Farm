#ifndef _PENGHASILTELUR_HPP
#define _PENGHASILTELUR_HPP

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