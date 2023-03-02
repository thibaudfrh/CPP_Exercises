#pragma once

#include <iostream>
#include "InstanceCounter.hpp"
#include <memory>

class Node;

using NodePtr = std::unique_ptr<Node>;

class Node : public InstanceCounter{

    public:
        virtual ~Node();
        virtual std::string print() const;
        //virtual int child_count();
        virtual void push_back(NodePtr node);
};


