//
// Created by Никита Плахин on 12/31/19.
//

#ifndef COURSERA_PROJECT_N_LIST_H
#define COURSERA_PROJECT_N_LIST_H

#include <string>

struct map{
    std::string key;
    int value;
    map* next = nullptr;
    map();
    map(std::string, int);
};

class n_list {
public:
    n_list();
    n_list(std::string, int);
    void add(std::string, int);
    void list_size();
    void show();
    void update(std::string, int, std::string, int);
    void del(std::string, int);
    void del(std::string);
private:
    map* find(std::string, int);
    map* head = nullptr;
    int size;
};

#endif //COURSERA_PROJECT_N_LIST_H
