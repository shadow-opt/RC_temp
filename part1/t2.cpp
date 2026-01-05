#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    int n;
    infile >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        infile >> arr[i];
    }
    sort(arr.begin(), arr.end()); // 使用stl
    for (const auto &num : arr)
    {
        outfile << num << " ";
    }
    outfile << "\n";
    infile.close();
    outfile.close();
    return 0;
}

/*
思考题：
    我们可以默认它是纯文本文件（题干：文件内容与1题中的输入格式一致）
    而且内容全部是数字，基本不会遇到文件编码问题

    1. 如果已知：直接修改"input.txt" "output.txt"
    2. 如果未知：调用filesystem库 自己找
*/