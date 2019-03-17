#include "Chicken.hpp"
#include <iostream>
using namespace std;


void Chicken::cek(){
    if (this->daging && this->telur){
        cout << "yes\n";
    }
}