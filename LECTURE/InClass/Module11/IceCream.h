// ICECREAM.H

#ifndef ICECREAM_H
#define ICECREAM_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class IceCream {
    // attributes
    private: // access specifier
        string cone;
        string flavor;
        string topping;
        double price;

    public:
        //Constructors
        IceCream();
        IceCream(string, string, string, double);

        //Accessor functions
        string getCone() const;
        string getFlavor() const;
        string getTopping() const;
        double getPrice() const;

        //Mutator functions
        void setCone(string);
        void setFlavor(string);
        void setTopping(string);
        void setPrice(double);

        void printIceCream() const;
};

#endif