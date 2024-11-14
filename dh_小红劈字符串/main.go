package main

import "fmt"

func solution(x string) string {
	return "-1"
}

func main() {
	fmt.Println(solution("abc")) // 预期输出: "ab c"
	fmt.Println(solution("ad"))  // 预期输出: "-1"
}
