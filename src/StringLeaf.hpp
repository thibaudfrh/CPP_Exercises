#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include <iostream>
#include <string>

class StringLeaf : public Leaf {

    private :
        std::string _value;
        NodeKind _node_kind;

    public :
        StringLeaf(std::string value);
        NodeKind kind() const;
        std::string print() const override;
        std::string data() const;
        static NodePtr make_ptr(std::string value);
        
};