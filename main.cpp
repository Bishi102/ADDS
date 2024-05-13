#include "node.cpp"
#include "Autocomplete.cpp"

int main() {
    Autocomplete autocomplete;
    autocomplete.insert("bin");
    autocomplete.insert("ball");
    autocomplete.insert("ballet");
    
    std::vector<std::string> suggestions1 = autocomplete.getSuggestions("b");
    for (const std::string& suggestion : suggestions1) {
        std::cout << suggestion << " ";
    }
    std::cout << std::endl;
    
    std::vector<std::string> suggestions2 = autocomplete.getSuggestions("ba");
    for (const std::string& suggestion : suggestions2) {
        std::cout << suggestion << " ";
    }
    std::cout << std::endl;
    
    std::vector<std::string> suggestions3 = autocomplete.getSuggestions("bal");
    for (const std::string& suggestion : suggestions3) {
        std::cout << suggestion << " ";
    }
    std::cout << std::endl;
    
    std::vector<std::string> suggestions4 = autocomplete.getSuggestions("balle");
    for (const std::string& suggestion : suggestions4) {
        std::cout << suggestion << " ";
    }
    std::cout << std::endl;
    
    return 0;
}