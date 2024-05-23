// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

bool search2DArray(vector<vector<int>> arr, int target)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            if (arr[rowIndex][colIndex] == target)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> arr(4, vector<int>(3, 0));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            cin >> arr[rowIndex][colIndex];
        }
        cout << endl;
    }

    int target = 40;

    bool ans = search2DArray(arr, target);

    cout << " Ans is : " << ans;
    return 0;
}