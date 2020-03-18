//剑指offer
//输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。
// 例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323。

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        int len = numbers.size();
        if(len == 0)
            return "";
        sort(numbers.begin(), numbers.end(), cmp); //对vector数据类型进行排序的sort写法
        string res;
        for(int i = 0; i < len; i++){
            res += to_string(numbers[i]);
        }
        return res;
    }
    static bool cmp(int a, int b){  //自己编写排序函数，并在这个排序函数中使用to_string函数把int形的数据转化成string数据类型
        string A = to_string(a) + to_string(b);
        string B = to_string(b) + to_string(a);
        return A < B; //使用降序排序
    }
};

//使用了别人的代码，但是和这个代码和书上的思路是一致的。但是由于使用了sort排序函数和自己定义的cmp函数，使得算法更加简洁有效