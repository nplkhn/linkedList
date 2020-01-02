//
// Created by Никита Плахин on 12/31/19.
//

#ifndef COURSERA_PROJECT_N_LIST_H
#define COURSERA_PROJECT_N_LIST_H

#include <string>
#include <stdio.h>


enum month {January = 1, February, March, April, May, June, July, August, September, October, November, December};

struct Date{
    std::string date, event;
    Date* next = nullptr;
    Date();
    Date(std::string, std::string);
    Date(std::string, int);
    void info();
    int d,m,y;
    void parse(std::string);
} typedef Date;

class n_list {
public:
    n_list();
    n_list(std::string, std::string);
    void add(std::string, std::string);
    int list_size();
    void show();
    void update(std::string, std::string, std::string, std::string);
    void del(std::string, std::string);
    void del_all_same_events(std::string);
    void del_all_events_in_same_date(std::string);
    void del_all_events_in_same_date(int, int, int);
private:
    Date* find(std::string, std::string);
    Date* head = nullptr;
    int size;
};

#endif //COURSERA_PROJECT_N_LIST_H
