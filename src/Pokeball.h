#pragma once
#include <memory>
#include "Pokemon.h"
// A ball where a Pokemon sleeps.
class Pokeball
{
    public :
        bool empty() const;

        void store(PokemonPtr pokemon);

       const Pokemon& pokemon() const;

       PokemonPtr steal();

    

    private :
        PokemonPtr _pokemon;
};
