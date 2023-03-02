#include "ObjectNode.hpp"

ObjectNode::ObjectNode():
    _node_kind{NodeKind::OBJECT}
    {}

NodeKind ObjectNode::kind() const{
    return _node_kind;
}

std::string ObjectNode::print() const{
    return "{}";
}

NodePtr ObjectNode::make_ptr(){
    return std::make_unique<ObjectNode>();
 }