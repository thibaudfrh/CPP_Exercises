#include "Pokemon.h"

Pokemon::Pokemon(const std::string& name)
    : _name {name}
    
    {
        _id = _next_id;
        _next_id++;
        _trainer = nullptr;
    }

Pokemon::Pokemon(const Pokemon& other)
    : _name {other._name}
    {
        _id = _next_id;
        _next_id++;
        _trainer = nullptr;
    }

Pokemon& Pokemon::operator=(const Pokemon& other){
    if(this != &other){
        _name = other._name;
    }

    return *this;
}

std::string Pokemon::name() const {
    return _name;
}

int Pokemon::id() const {
    return _id;
}

void Pokemon::set_trainer(const Trainer& trainer){
    _trainer = &trainer;
}

const Trainer* Pokemon::trainer() const{
    return _trainer;
}

int Pokemon::_next_id = 0;

