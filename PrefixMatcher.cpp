#include "PrefixMatcher.h"

void PrefixMatcher::insertAddress(const std::string &address, int routerNumber) {
    TrieNode* current = root;
        for (char c : address) {
            if (!current->children[c]) {
                current->children[c] = new TrieNode();
            }
            current = current->children[c];
        }
        current->isEndOfWord = true;
        current->routerNumber = routerNumber;
}

PrefixMatcher::PrefixMatcher() {
    root = new TrieNode();
}

 void PrefixMatcher::insert(const std::string& address, int routerNumber) {
    insertAddress(address, routerNumber);
}

int PrefixMatcher::selectRouter(const std::string& networkAddress) {
    TrieNode* current = root;
    int longestPrefixRouter = -1; 
        
    for (char c : networkAddress) {
        if (!current->children[c]) {
            break;
        }
        current = current->children[c];
        if (current->routerNumber != -1) {
            longestPrefixRouter = current->routerNumber; 
        }
    }  
    
    return longestPrefixRouter;
}