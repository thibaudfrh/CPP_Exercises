#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"
#include <iostream>
#include <string>
#include <vector>

class ArrayNode : public Node {

    private:
        NodeKind _node_kind;
        std::vector<NodePtr> _data;

    public:
        ArrayNode();

        NodeKind kind() const;
        std::string print() const override;

        static std::unique_ptr<ArrayNode> make_ptr();
        int child_count() const;
        void   push_back(NodePtr node) override;
            


};