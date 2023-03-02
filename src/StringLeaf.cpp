#include "StringLeaf.hpp"

StringLeaf::StringLeaf(std::string value):
    _value {value}, _node_kind(NodeKind::STRING)
    {}

NodeKind StringLeaf::kind() const{
    return _node_kind;
}

std::string StringLeaf::print() const {
    return "\"" + _value + "\"";
}

std::string StringLeaf::data() const {
    return _value;
}

 NodePtr StringLeaf::make_ptr(std::string value){
    return std::make_unique<StringLeaf>(value);
 }