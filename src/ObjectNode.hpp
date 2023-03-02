#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"
#include <iostream>
#include <string>

class ObjectNode : public Node {

    private:
        NodeKind _node_kind;

    public:
        ObjectNode();

        NodeKind kind() const;
        std::string print() const override;
        static NodePtr make_ptr();
            


};
