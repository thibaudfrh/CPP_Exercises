#pragma once
#include "Card.hpp"

enum class TrapType{
    Normal, Continuous, Counter

};

std::string to_string(const TrapType type){
    switch (type)
    {
    case TrapType::Normal:
        return "Normal";

    case TrapType::Continuous:
        return "Continuous";

    case TrapType::Counter:
        return "Counter";
    }

    return "";
}

class Trap: public Card{
    private:
        TrapType _trap_type;

    public:
        Trap(std::string id, std::string name, TrapType type)
        : Card{id, CardType::Trap}, _trap_type {type}
        {
            set_name(name);
            _symbol = u8"罠";
        }

        TrapType get_trap_type() const {
            return _trap_type;
        }

};