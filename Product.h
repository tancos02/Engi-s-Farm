#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include <iostream>
using namespace std;

class Product {
    // Basis Kelas Abstrak
    protected:
        double Price; // Menyatakan harga dari hasil produk

    public:
        //Setter
        void SetPrice(double _Price);

        //Getter
        double GetPrice() const;

};

// Jenis-jenis dari kelas produk
class FarmProduct : public Product {};

class SideProduct : public Product {};

// kelas yang termasuk farm product
// Produk hasil dari ayam
class ChickenEgg : public FarmProduct {
    public:
        // ctor default
        ChickenEgg();
};

// Produk hasil dari bebek
class DuckEgg : public FarmProduct {
    public:
        // ctor default
        DuckEgg();
};

class DuckMeat : public FarmProduct {
    public:
        // ctor default
        DuckMeat();
};

// Produk hasil dari kambing
class GoatMeat : public FarmProduct {
    public:
        // ctor default
        GoatMeat();
};

// Produk hasil dari kelinci
class RabbitMeat : public FarmProduct {
    public:
        // ctor default
        RabbitMeat();
};

// Produk hasil dari sapi
class CowMeat : public FarmProduct {
    public:
        // ctor default
        CowMeat();
};

class CowMilk : public FarmProduct {
    public:
        // ctor default
        CowMilk();
};

class HorseMilk : public FarmProduct {
    public:
        // ctor default
        HorseMilk();
};

// Kelas yang termasuk side product
// Produk sampingan hasil dari telur ayam dan susu sapi
class PieSusu : public SideProduct {
    public:
        // ctor default
        PieSusu();
};

// Produk sampingan hasil dari daging kambing dan susu kuda
class Carbonara : public SideProduct {
    public:
        // cotr default
        Carbonara();
};

// Produk sampingan hasil dari daging kelinci dan telur bebek
class Burger : public SideProduct {
    public:
        // cotr default
        Burger();
};

// Produk sampingan hasil dari telur bebek, daging sapi dan susu kuda
class GoldenMeatDespacito : public SideProduct {
    public:
        // cotr default
        GoldenMeatDespacito();
};

#endif // PRODUCT_H_INCLUDED
