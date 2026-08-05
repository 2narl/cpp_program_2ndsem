#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {40, 50, 60, 30, 80, 10};
    nums.push_back(100);

    sort(nums.begin(), nums.end());
    for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (int n : nums)
        cout << n << " ";
}