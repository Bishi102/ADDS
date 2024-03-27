#include "Finder.h"	
#include <iostream>	

int main() {	
    std::string s1 = "734658732465";	
    std::string s2 = "463";	
    Finder finder;	

    std::vector<int> result = finder.findSubstrings(s1,s2);	

    for (int i = 0; i<result.size(); i++) {	
        std::cout << result[i];	
    }	
    return 0;	
}