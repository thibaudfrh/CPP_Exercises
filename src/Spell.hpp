#pragma once

#include "Card.hpp"

enum class SpellType{
    Normal, Equip, Continuous, QuickPlay, Field
};

std::string to_string (const SpellType type){
    switch (type)
    {
    case SpellType::Normal:
        return "Normal";

    case SpellType::Equip:
        return "Equip";

    case SpellType::Continuous:
        return "Continuous";

    case SpellType::QuickPlay:
        return "Quick-Play";

    case SpellType::Field:
        return "Field";
    }

    return "";
}

class Spell : public Card{

    private: 
        SpellType _spell_type;


    public:
        Spell(std::string id, std::string name, SpellType type)
        : Card{id, CardType::Spell}, _spell_type {type}
        {
            set_name(name);
            _symbol = u8"魔";
        }

        SpellType get_spell_type() const{
            return _spell_type;
        }

};
