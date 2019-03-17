#ifndef _PENGHASILDAGING_HPP
#define _PENGHASILDAGING_HPP

#include <iostream>
#include "Animal.hpp"
using namespace std;

class MeatProducer: virtual public Animal{
    public:
    MeatProducer();

    protected:
    int meat; 
};

#endif