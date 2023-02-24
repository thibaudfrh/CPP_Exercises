#pragma once

#include <string>

class Trainer;
// A creature that is cute and can fight other ones.
class Pokemon
{   
    private : 
         std::string _name;
         int _id;
         const Trainer* _trainer;

    public :
        Pokemon(const std::string& name); 
        Pokemon(const Pokemon& other);
        static int _next_id;
        
        int id() const;

        std::string name() const;

        Pokemon& operator=(const Pokemon& other);
    
        void set_trainer(const Trainer& trainer);

        const Trainer* trainer() const;
    
        
};

using PokemonPtr = std::unique_ptr<Pokemon>;



