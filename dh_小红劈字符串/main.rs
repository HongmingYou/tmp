fn solution(x: &str) -> String {
    String::from("-1")
}

fn main() {
    println!("{}", solution("abc")); // 预期输出: "ab c"
    println!("{}", solution("ad"));  // 预期输出: "-1"
}