//
// Created by Никита Плахин on 12/31/19.
//

#include "n_list.h"
#include <iostream>

map::map() {
    key = "";
    value = 0;
}

map::map(std::string key, int value) {
    map::key = key;
    map::value = value;
}

n_list::n_list() {
    this->size = 1;
    map* current = new map;
    this->head = current;
}

n_list::n_list(std::string key, int value) {
    this->size = 1;
    map* current = new map(key, value);
    this->head = current;
}

void n_list::add(std::string key, int value) {
    this->size++;
    map* current = this->head;
    while (current->next){
        current = current->next;
    }
    map* new_member = new map(key, value);
    current->next = new_member;
}

void n_list::list_size(){
    std::cout << this->size << std::endl;
}

void n_list::show() {
    map* current = this->head;
    while (current){
        std::cout << current->key << ": " << current->value << std::endl;
        current = current->next;
    }
}

void n_list::update(std::string aim_key, int aim_value, std::string new_key, int new_value) {
    map* aim = this->find(aim_key, aim_value);
    if (aim){
        aim->key = new_key;
        aim->value = new_value;
    }
    return;
}

map* n_list::find(std::string key, int value) {
    map* current = this->head;
    while (current) {
        if (current->key == key and current->value == value){
            return current;
        }
        current = current->next;
    }
}

void n_list::del(std::string key, int value) {
    map* current = this->head, *prev;
    if (current->key == key and current->value == value){
        this->head = current->next;
        free(current);
        return;
    }
    while (current){
        if (current->key == key and current->value == value){
            prev->next = current->next;
            free(current);
            break;
        }
        prev = current;
        current = current->next;

    }
}

void n_list::del(std::string key) {
    map* current = this->head, *prev = this->head;

    while (current){
        if (current->key == key and current == prev){
            map* temp = current->next;
            this->head = temp;
            free(current);
            current = this->head;
            prev = this->head;

        } else if (current->key == key){
            map* temp;
            temp = current->next;
            free(current);
            current = temp;
            prev->next = current;
        } else {
            prev = current;
            current = current->next;
        }
    }
}
