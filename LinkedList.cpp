//cuma ngetest
#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main(){
    LinkedList<int> x;
    x.add(1);
    x.add(3);
    x.remove(1);
    x.print();
    LinkedList<int> y;
    y = x;
    y.print();
    y.add(10);
    x.print();
    y.print();
    LinkedList<int> z(x);
    z.print();
}