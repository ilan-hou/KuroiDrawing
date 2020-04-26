#pragma once
//该头文件中储存的都是对字符数组处理的函数
#include<string>
#include<sstream>
#include<vector>
using std::string;
using std::vector;
vector<int>  getInt(const char* c) {
    string s, ss;
    bool flag = false;
    vector<int> a;
    for (int i = 0;i < 100;i++) {
        s = s + c[i];
    }
    s.erase(s.find_last_of("0123456789") + 1);
    int n = s.size();
    while (n >= 0) {
        if (s[0] >= '0' && s[0] <= '9')
        {
            ss = ss + s[0];
            s.erase(0, 1);
            --n;
        }
        else {
            std::istringstream iss(ss);
            int num;
            iss >> num;
            a.push_back(num);
            s.erase(0, 1);
            ss = "";
            --n;
        }
    }
    return a;
};