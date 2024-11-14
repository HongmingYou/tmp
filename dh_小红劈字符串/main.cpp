#include <string>
#include <iostream>
using namespace std;

string solution(string x) {
    return "-1";
}

int main() {
    cout << solution("abc") << endl;  // 预期输出: "ab c"
    cout << solution("ad") << endl;   // 预期输出: "-1"
    return 0;
}