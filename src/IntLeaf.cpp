#include "IntLeaf.hpp"

IntLeaf::IntLeaf(int value)
    : _value {value}, _node_kind {NodeKind::INT}
{}

NodeKind IntLeaf::kind() const{
    return _node_kind;
}

std::string IntLeaf::print() const{
    return std::to_string(_value);
}

int IntLeaf::data() const{
    return _value;
}

NodePtr IntLeaf::make_ptr(int value){
    return std::make_unique<IntLeaf>(value);
}