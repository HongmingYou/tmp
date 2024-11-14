#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n, vector<int>& arr) {
    return vector<int>{0};  // 返回默认值
}

int main() {
    int n = 5;
    vector<int> arr = {2, 5, 3, 2, 2};
    vector<int> result = solution(n, arr);
    
    // 输出结果
    for(int num : result) {
        cout << num << " ";
    }
    return 0;
}