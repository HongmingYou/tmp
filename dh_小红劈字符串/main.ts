function solution(x: string): string {
    return "-1";
}

function main(): void {
    console.log(solution("abc")); // 预期输出: "ab c"
    console.log(solution("ad"));  // 预期输出: "-1"
}

main();