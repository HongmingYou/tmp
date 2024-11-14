#include <stdio.h>

// ... includes ...

char* solve(const char* x) {
    return "-1";
}

int main() {
    char* result = solve("abc");
    printf("%s\n", result);  // 预期输出: "ab c"
    
    result = solve("ad");
    printf("%s\n", result);  // 预期输出: "-1"
    
    return 0;
}