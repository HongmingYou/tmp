## 小红的回文子串

### 问题描述
小红拿到了一个字符串，她可以操作最多1次：修改任意一个字符。
小红希望操作结束后，长度为3的回文连续子串的数量尽可能多。请你求出这个数量。

**输入：**
- `str`: 一个仅包含小写字母的字符串，长度不超过100。

**输出：**
- 一个整数，代表操作结束后，长度为3的回文连续子串的数量的最大值。

### 测试样例

***示例1***
>输入：`str = "abcde"`
>输出：`1`
>说明：将第二个字符修改为`d`即可，这样字符串变成`adcde`，共包含1个长度为3的回文字串。