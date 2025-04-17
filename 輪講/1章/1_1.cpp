#include <iostream>
#include <string>
using namespace std;
#include <unordered_set>

bool isUniqueChars(const string& str) {
    int checker =0;
    for (int i = 0; i < str.length(); i++) {
        int val = str[i] - 'a';
        if ((checker & (1 << val)) > 0) {
            return false;
        }
        checker |= (1 << val);
    }
    return true;
}

int main() {
    string test1 = "abcdefg";
    string test2 = "hello";

    std::cout << "abcdefg: " << (isUniqueChars(test1) ? "true" : "false") << std::endl;
    std::cout << "hello: " << (isUniqueChars(test2) ? "true" : "false") << std::endl;

    return 0;
}
