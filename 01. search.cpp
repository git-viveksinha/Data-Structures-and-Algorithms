
#include <iostream>
using namespace std;

bool search2DArray(int arr[][4], int rowSize, int colSize, int target)
{
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
    // iska matlab entire array mein target nhi mila , target not found
    return false;
}

int main()
{

    // int arr[3][4] = {
    //                     {10,11,12,13},
    //                     {20,21,22,23},
    //                     {31,32,44,55}
    // };

    int arr[3][4];

    int rowSize = 3;
    int colSize = 4;
    int target = 44;

    // user Input
    for (int r = 0; r < rowSize; r++)
    {
        for (int c = 0; c < colSize; c++)
        {
            cout << "Enter the value (" << r << "," << c << ") : ";
            cin >> arr[r][c];
        }
    }

    bool ans = search2DArray(arr, rowSize, colSize, target);

    cout << "Ans is : " << ans;

    return 0;
}