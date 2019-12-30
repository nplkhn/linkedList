#include <iostream>
#include <string>

using namespace std;

struct map{
    string key;
    int value;
    map* next = nullptr;
    map(){
        key = "";
        value = 0;
    }
    map(string key, int value){
        map::key = key;
        map::value = value;
    }
};

class n_linkedList {
public:
    n_linkedList();
    n_linkedList(string, int);
    void add(string key, int value);
    void list_size();
    void show();
    void update(string aim_key, int aim_value, string new_key, int new_value);
    void del(string key, int value);
private:
    map* find(string key, int value);
    map* head = nullptr;
    int size;


};

n_linkedList::n_linkedList() {
    this->size = 1;
    map* current = new map;
    this->head = current;
}

n_linkedList::n_linkedList(string key, int value) {
    this->size = 1;
    map* current = new map(key, value);
    this->head = current;
}

void n_linkedList::add(string key, int value) {
    this->size++;
    map* current = this->head;
    while (current->next){
        current = current->next;
    }
    map* new_member = new map(key, value);
    current->next = new_member;
}

void n_linkedList::list_size(){
    cout << this->size << endl;
}

void n_linkedList::show() {
    map* current = this->head;
    while (current){
        cout << current->key << ": " << current->value << endl;
        current = current->next;
    }
}

void n_linkedList::update(string aim_key, int aim_value, string new_key, int new_value) {
    map* aim = this->find(aim_key, aim_value);
    aim->key = new_key;
    aim->value = new_value;
}

map* n_linkedList::find(string key, int value) {
    map* current = this->head;
    while (current) {
        if (current->key == key and current->value == value){
            return current;
        }
        current = current->next;
    }
}

void n_linkedList::del(string key, int value) {
    map* current = this->head;
    while(current){
        if (current->next->key == key and current->next->value == value){
            current = current->next->next;
        }
    }
}

int main() {
    cout << "Testing add method" << endl;
    n_linkedList list("Nikita", 1);
    list.add("Karina", 1);
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
    cout << "\nTesting find method" << endl;
    return 0;
}