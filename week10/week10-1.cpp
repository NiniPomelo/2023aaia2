//Leetcode 1137. N-th Tribonacci Number
// 0 1 1 2 4 7 13 24 ...請問地n項的答案是多少?
// C++的Leetcode版本 要小心 class Solution{ 和 public: 不能動到。}
//最下面的大括號、分號，也不能動到
class Solution {
public:
    int tribonacci(int n) {
       int a[40] = {0, 1, 1}; //前3項準備好，後面的37項沒寫，就都是0
        for(int i=3;i<=n;i++){
            a[i] = a[i-1] + a[i-2] + a[i-3]; //前3項相加 得到新的項
    }
    return a[n]; //答案要算出第n項 
    }
};