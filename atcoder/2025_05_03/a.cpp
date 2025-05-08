#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string S;
    std::cin >> S;

    std::vector<bool> seen(26, false);
    for (char c : S) {
        seen[c - 'a'] = true;
    }

    for (int i = 0; i < 26; ++i) {
        if (!seen[i]) {
            std::cout << static_cast<char>('a' + i) << std::endl;
            break;
        }
    }

    return 0;
}
