#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPermutation(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) return false;

    string sorted1 = s1;
    string sorted2 = s2;
    sort(sorted1.begin(), sorted1.end());
    sort(sorted2.begin(), sorted2.end());

    return sorted1 == sorted2;
}

int main() {
    string s1 = "abc";
    string s2 = "bca";
    string s3 = "abcd";

    cout << "abc, bca: " << (isPermutation(s1, s2) ? "true" : "false") << std::endl;
    cout << "abc, abcd: " << (isPermutation(s1, s3) ? "true" : "false") << std::endl;

    return 0;
}
