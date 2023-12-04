#include "IceCream.h"

int main() {
    int iceCreamAmount;

    cout << "How many ice creams would you like?\n";
    cin >> iceCreamAmount;
    cin.ignore();

    IceCream* *iceCreamArray;
    iceCreamArray = new IceCream* [iceCreamAmount];

    string cone, flavor, topping;
    double price;

    for(int i=0; i < iceCreamAmount; i++) {
        cout << "Enter data for ice cream " << i + 1 << ":\n\n";

        cout << "Type of cone: \t\t";
        getline(cin, cone);

        cout << "Type of flavor: \t\t";
        getline(cin, flavor);

        cout << "Type of topping: \t\t";
        getline(cin, topping);

        cout << "Price: \t\t";
        cin >> price;
        cin.ignore();

        iceCreamArray[i] = new IceCream(cone, flavor, topping, price);
    }

    cout << "\n\n\nYOUR ICE CREAM ORDER:\n";

    for(int i = 0; i < iceCreamAmount; i++) {
        cout << "Ice cream number " << i + 1 << endl;
        iceCreamArray[i]->printIceCream();
    }

    for(int i = 0; i < iceCreamAmount; i++) {
        delete iceCreamArray[i];
    }

    delete [] iceCreamArray;
}