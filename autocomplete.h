#include <iostream>
#include <unordered_map>
#include <vector>

#include "node.h"

#pragma once

class Autocomplete {
    private:
        TrieNode* root;

        void insertWord(const std::string& word);
        void getSuggestionsHelper(TrieNode* node, const std::string& prefix, std::vector<std::string>& suggestions);

    public:
        Autocomplete();

        void insert(const std::string& word);
        std::vector<std::string> getSuggestions(const std::string& partialWord);

};