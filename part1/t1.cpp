#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end()); // 使用stl
    for (const auto &num : arr)
    {
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}

/*
思考题：
    n 大到内存装不下？
答：
    外部排序
*/