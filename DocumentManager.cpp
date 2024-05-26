#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
        documents[id] = {name, id, license_limit, 0};
}
    
void DocumentManager::addPatron(int patronID) {
        patrons.insert(patronID);
}
    
int DocumentManager::search(std::string name) {
    for (const auto& [id, doc] : documents) {
        if (doc.name == name) {
            return id;
        }
    }
    return 0;
}
    
bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (documents.find(docid) == documents.end() || patrons.find(patronID) == patrons.end()) {
        return false;
    }
    auto& doc = documents[docid];
    if (doc.current_borrowed < doc.license_limit) {
        if (borrowed_docs[docid].insert(patronID).second) {
            doc.current_borrowed++;
            return true;
        }
    }
    return false;
}
    
void DocumentManager::returnDocument(int docid, int patronID) {
    if (borrowed_docs.find(docid) != borrowed_docs.end() && borrowed_docs[docid].erase(patronID)) {
        documents[docid].current_borrowed--;
    }
}