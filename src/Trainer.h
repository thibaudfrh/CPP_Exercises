#pragma once
#include <string.h>
#include "PC.h"
#include "Pokeball.h"
#include <iostream>
#include <array>
#include <memory>
#include <utility>

// A person that captures Pokemons and makes them fight.
class Trainer
{
    private:
        std::string _name;
        PC& _pc;
        std::array<Pokeball, 6> _pokeballs;

    public:
       Trainer(const std::string& name, PC& pc);

       const std::string& name() const;

       PC& pc();

       const std::array<Pokeball, 6>& pokeballs() const;

       void capture(PokemonPtr pokemon);

       void store_in_pc(int index);
};
