#include "autocomplete.h"

void Autocomplete::insertWord(const std::string & word) {
    TrieNode* current = root;
    for (char c : word) {
        if (!current->children[c]) {
            current->children[c] = new TrieNode();
        }
        current = current->children[c];
    }
    current->isEndOfWord = true;
}

void Autocomplete::getSuggestionsHelper(TrieNode * node, const std::string & prefix, std::vector<std::string>& suggestions) {
    if (node->isEndOfWord) {
        suggestions.push_back(prefix);
    }
    for (auto& pair : node->children) {
        char c = pair.first;
        TrieNode* child = pair.second;
        getSuggestionsHelper(child, prefix + c, suggestions);
    }
}

Autocomplete::Autocomplete() {
    this->root = new TrieNode();
}

void Autocomplete::insert(const std::string & word) {
    insertWord(word);
}

std::vector<std::string> Autocomplete::getSuggestions(const std::string & partialWord) {
    std::vector<std::string> suggestions;
    TrieNode* current = root;
    for (char c : partialWord) {
        if (!current->children[c]) {
            return suggestions;
        }
        current = current->children[c];
    }
    getSuggestionsHelper(current, partialWord, suggestions);
    return suggestions;
}


