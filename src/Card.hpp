#pragma once
#include <string>

enum class CardType{

    Monster, Spell, Trap

};


std::string to_string(const CardType type){
    switch(type){
        case CardType::Monster:
            return "Monster";
        case CardType::Spell:
            return "Spell";

        case CardType::Trap:
            return "Trap";
    
    }

    return "";
}

class Card {


    protected:
        std::string _symbol;
        
    private:
        std::string _name;
        std::string _id;
        std::string _description;
        CardType _type;
       
    
    public:

        Card(std::string id, CardType type) : _id {id} , _type{type}
        {}

        std::string get_id() const {
            return _id;
        }

        std::string get_name() const {
            return _name;
        }

        CardType get_type() const {
            return _type;
        }

        std::string get_description() const {
            return _description;
        }

        std::string get_symbol() const {
            return _symbol;
        }

        void set_name(std::string name){
            _name = name;
        }

        void set_description(std::string description){
            _description = description;
        }


};