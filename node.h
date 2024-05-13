#include <iostream>
#include <unordered_map>
#include <vector>

#pragma once

class TrieNode {
    public: 
        std::unordered_map<char, TrieNode*> children;
        bool isEndOfWord;

        TrieNode();
        
};