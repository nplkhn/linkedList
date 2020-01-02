//
// Created by Никита Плахин on 12/31/19.
//

#include "n_list.h"
#include <iostream>

Date::Date() {
    date = "";
    event = "";
    d = 0;
    m = 0;
    y = 0;
}

Date::Date(std::string date, std::string event) {
    Date::date = date;
    Date::event = event;
    this->parse(date);
}

void Date::parse(std::string date) {
    sscanf(date.c_str(), "%2d/%2d/%4d", &d, &m, &y);
}

void Date::info() {
    std::cout << d/10 << d%10 << '/' << m/10 << m%10 << '/' << y/1000 << y/100%10 << y/10%10
    << y%10 << ": " << event << std::endl;
}

n_list::n_list() {
    this->size = 0;
    this->head = nullptr;
}

n_list::n_list(std::string date, std::string event) {
    this->size = 1;
    Date* current = new Date(date, event);
    this->head = current;
}

void n_list::add(std::string date, std::string event) {
    this->size++;

    if (this->head == nullptr){
        Date* new_member = new Date(date, event);
        this->head = new_member;
    } else {
        Date* current = this->head;
        while (current->next){
            current = current->next;
        }
        Date* new_member = new Date(date, event);
        current->next = new_member;
    }
}

int n_list::list_size(){
    return size;
}

void n_list::show() {
    Date* current = this->head;
    while (current){
        current->info();
        current = current->next;
    }
}

void n_list::update(std::string aim_date, std::string aim_event, std::string new_date, std::string new_event) {
    Date* aim = this->find(aim_date, aim_event);
    if (aim){
        aim->date = new_date;
        aim->event = new_event;
        aim->parse(new_date);
    }
}

Date* n_list::find(std::string date, std::string event) {
    Date* current = this->head;
    while (current) {
        if (current->date == date and current->event == event){
            return current;
        }
        current = current->next;
    }
    Date* empty = nullptr;
    return empty;
}

void n_list::del(std::string date, std::string event) {
    Date* current = this->head, *prev;
    if (current->date == date and current->event == event){
        this->head = current->next;
        free(current);
        return;
    }
    while (current){
        if (current->date == date and current->event == event){
            prev->next = current->next;
            free(current);
            break;
        }
        prev = current;
        current = current->next;

    }
}

void n_list::del_all_same_events(std::string event) {
    Date* current = this->head, *prev = this->head;

    while (current){
        if (current->event == event and current == prev){
            Date* temp = current->next;
            this->head = temp;
            free(current);
            current = this->head;
            prev = this->head;

        } else if (current->event == event){
            Date* temp;
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

void n_list::del_all_events_in_same_date(std::string date) {
    Date* current = this->head, *prev = this->head;

    while (current){
        if (current->event == date and current == prev){
            Date* temp = current->next;
            this->head = temp;
            free(current);
            current = this->head;
            prev = this->head;

        } else if (current->event == date){
            Date* temp;
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

void n_list::del_all_events_in_same_date(int d, int m, int y) {
    Date* current = this->head, *prev = this->head;

    while (current){
        if (current->d == d and current->m == m and current->y == y and current == prev){
            Date* temp = current->next;
            this->head = temp;
            free(current);
            current = this->head;
            prev = this->head;

        } else if (current->d == d and current->m == m and current->y == y){
            Date* temp;
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
