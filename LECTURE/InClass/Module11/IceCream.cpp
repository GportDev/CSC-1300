#include "IceCream.h"

//Getters (Accessor functions)
string IceCream::getCone() const {
    return cone;
}

string IceCream::getFlavor() const {
    return flavor;
}

string IceCream::getTopping() const {
    return topping;
}

double IceCream::getPrice() const {
    return price;
}

//Setters (Mutator functions)
void IceCream::setCone(string c) {
    cone = c;
}
void IceCream::setFlavor(string f) {
    flavor = f;
}
void IceCream::setTopping(string t) {
    topping = t;
}
void IceCream::setPrice(double p) {
    price = p;
}

// Constructors
IceCream::IceCream() {
    cone = "";
    flavor = "";
    topping = "";
    price = 0.0;
}

IceCream::IceCream(string c, string f, string t, double p) {
    cone = c;
    flavor = f;
    topping = t;
    price = p;
}

void IceCream::printIceCream() const{
    cout << setprecision(2) << fixed;

    cout << "Cone: " << getCone() << endl;
    cout << "Flavor: " << getFlavor() << endl;
    cout << "Topping: " << getTopping() << endl;
    cout << "Price: " << getPrice() << endl;
}