#include "node.h"

#include <iostream>
#include <unordered_map>

#pragma once

class PrefixMatcher {
private:
    TrieNode* root;
    
    void insertAddress(const std::string& address, int routerNumber);
    
public:
    PrefixMatcher();
    
    void insert(const std::string& address, int routerNumber);
    
    int selectRouter(const std::string& networkAddress);
};