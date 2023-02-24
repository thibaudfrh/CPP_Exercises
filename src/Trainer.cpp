#include "Trainer.h"


const std::string& Trainer::name() const{
    return _name;
}

Trainer::Trainer(const std::string& name, PC& pc)
    :
    _name {name},
    _pc {pc}
    {};

PC& Trainer::pc(){
    return _pc;
}

const std::array<Pokeball, 6>& Trainer::pokeballs() const{
    return _pokeballs;
}

void Trainer::capture(PokemonPtr pokemon){
    // for (auto& pokeball: _pokeballs)
    //     {
    //         if (pokeball.empty())
    //         {
    //             pokeball.store(std::move(pokemon));
    //             return;
    //         }
    //     }

    for(int i = 0; i<6; ++i){

        pokemon->set_trainer(*this);
        if(_pokeballs[i].empty()){
            _pokeballs[i].store(std::move(pokemon));
            return;
        }
    }

        _pc.transfer(std::move(pokemon));

}

void Trainer::store_in_pc(int index){
    _pc.transfer(_pokeballs[index].steal());

    
}

