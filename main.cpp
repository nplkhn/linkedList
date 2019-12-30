#include <iostream>
#include <string>

using namespace std;

struct map{
    string key;
    int value;
    map(){
        key = "";
        value = 0;
    }
};

class n_linkedList {
public:
    n_linkedList();
    n_linkedList(string, int);
    void add(string key, int value);
    void list_size();
    void show();
    void update(string key, int value);
    map find(string key, int value);
private:
    map value;
    int size;
    n_linkedList* next = nullptr;
};

n_linkedList::n_linkedList() {
    this->size = 1;
    this->value.key = "";
    this->value.value = 0;
}

n_linkedList::n_linkedList(string key, int value) {
    this->size = 1;
    this->value.key = key;
    this->value.value = value;
}

void n_linkedList::add(string key, int value) {
    this->size++;
    n_linkedList* current = this;
    while (current->next){
        current = current->next;
    }
    n_linkedList* new_member = new n_linkedList;
    current->next = new_member;
    current = current->next;
    current->value.key = key;
    current->value.value = value;
}

void n_linkedList::list_size(){
    cout << this->size << endl;
}

void n_linkedList::show() {
    n_linkedList* current = this;
    while (current){
        cout << current->value.key << " " << current->value.value << endl;
        current = current->next;
    }
}

void n_linkedList::update(string key, int value) {
    n_linkedList* current = this;
    while (current){
        if (current->value.key == key){
            current->value.value=value;
            break;
        }
        else if (!current->next){
            cout << "No member" << endl;
            break;
        }
        else
            current = current->next;
    }
}

map n_linkedList::find(string key, int value) {
    n_linkedList* current = this;
    while (current) {
        if (current->value.key == key and current->value.value == value) {
            return current->value;
        }
        current = current->next;
    }
}

int main() {
    n_linkedList list("Nikita", 1);
    list.add("Karina", 1);
    list.add("Maria", 1);
    list.add("Egor", 2);
    list.add("Alexandra", 2);
    list.add("Dmitriy", 3);
    list.add("Anastasia", 4);
    list.list_size();
    list.show();

    list.update("Karina", 10);
    list.show();
    list.update("Viola", 1);

    map test;
    test = list.find("Karina", 10);
    cout << test.key << " " << test.value << endl;
    return 0;
}