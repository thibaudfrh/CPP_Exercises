#pragma once
#include <iostream>
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include <string>
#include <memory>


class IntLeaf : public Leaf {

    private:
        int _value;
        NodeKind _node_kind;

    public :
        IntLeaf(int value);
        NodeKind kind() const;
        std::string print() const override;
        int data() const;
        static NodePtr make_ptr(int value);


};