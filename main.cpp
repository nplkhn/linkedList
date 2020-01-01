#include <iostream>
#include "n_list.h"

using namespace std;



int main() {
    cout << "Testing add method" << endl;
    n_list list("Nikita", 1);
    list.add("Karina", 1);
    list.add("Karina", 2);
    list.add("Karina", 3);
    list.add("Karina", 4);
    list.add("Karina", 5);
    list.add("Maria", 1);
    list.add("Egor", 2);
    list.add("Alexandra", 2);
    list.add("Dmitriy", 3);
    list.add("Anastasia", 4);
    list.list_size();
    list.show();
    cout << "\nTesting update method" << endl;
    list.update("Karina", 1, "Karina", 10);
    list.show();
    list.update("Viola", 1, "Karina", 10);
    cout << "\nTesting del method" << endl;
    list.del("Nikita", 1);
    list.show();
    cout << endl;
    list.del("Alexandra", 2);
    list.show();
    cout << endl;
    list.del("Karina");
    list.show();
    return 0;
}