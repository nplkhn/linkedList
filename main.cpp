#include <iostream>
#include "n_list.h"

using namespace std;



int main() {
    using namespace std;
    n_list list("31/12/2019", "Came to Grodno");
    cout << "test 'add' method:" << endl;
    list.add("31/12/2020", "Drink whiskey and cola");
    list.add("01/01/2020", "Celebrated New year eye");
    list.add("01/01/2020", "Dance on the table");
    list.add("01/01/2020", "Drink whiskey and cola");
    list.add("02/01/2020", "Drink whiskey and cola");
    list.add("02/01/2020", "Came home");
    cout << "Where are " << list.list_size() << " members: " << endl;
    list.show();
    cout << endl;

    cout << "test 'update' method:" << endl;
    list.update("02/01/2020", "Drink whiskey and cola", "02/01/2020", "Drink cola");
    list.show();
    cout << endl;

    cout << "test 'del' method:" << endl;
    list.del("01/01/2020", "Dance on the table");
    list.show();
    cout << endl;

    cout << "test 'del_all_same_events' method:" << endl;
    list.del_all_same_events("Drink whiskey and cola");
    list.show();
    cout << endl;


    return 0;
}