#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  size_t found = 0;
  for (size_t i = 1; i <= s2.size(); i++) {
    found = s1.find(s2.substr(0, i), found);
    if (found != string::npos) {
      result.push_back(found);
      found += (i-1);
    } else {
      result.push_back(-1);
    }
  }
  return result;
}

// log of changes and time
// original - 65s
// starting find() at previous found - 3s
// starting find() at previous found + length of substr - 3s


