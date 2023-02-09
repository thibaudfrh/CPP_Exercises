#pragma once
#include <string>

class PlushStore{

    private:
        std::string _name;
        int _wealth = 0;
        int _stock = 0;
        int _debt = 0;
        int _exp = 0;

    public:
        PlushStore(std::string name):_name {name} {}

        std::string get_name() const{
            return _name;
        }

        int get_wealth_amount() const{
            return _wealth;
        }

        int get_stock_size() const{
            return _stock;
        }

        int get_debt_amount() const{
            return _debt;
        }

        void loan(int amount){
            _wealth += amount;
            _debt += (int) amount * 1.1;
        }

        int make_plush(int price){
            if(_wealth > 0){
                _wealth -= price;
                if(_wealth < 0)
                    _wealth = 0;
                _stock++;
                int value = price + _exp++;
                return value;
            }
            return 0;
        }

        int get_experience() const{
            return _exp;
        }

};