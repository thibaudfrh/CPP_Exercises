#include "ArrayNode.hpp"

ArrayNode::ArrayNode():
    _node_kind{NodeKind::ARRAY}
    {}

NodeKind ArrayNode::kind() const {
    return _node_kind;
}

std::string ArrayNode::print() const {
    return "[]";
}

std::unique_ptr<ArrayNode> ArrayNode::make_ptr(){
    auto result = std::make_unique<ArrayNode>();
    return result;
 }

 int ArrayNode::child_count() const{
    return _data.size();
 }

 void ArrayNode::push_back(NodePtr node)
{
    _data.push_back(std::move(node));
}