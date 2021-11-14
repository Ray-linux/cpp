// spiral Order Matrix Traversal

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][m];
        }
    }
    // spiral oder print
    int raw_start = 0, raw_end = n - 1, column_start = 0, column_end = m - 1;
    while (raw_start <= raw_end && column_start <= column_end)
    {
        // for raw start
        for (int col = column_start; col <= column_end; col++)
        {
            cout << arr[raw_start][col] << " ";
        }
        raw_start++;
        // for column end
        for (int raw = raw_start; raw <= raw_end; raw++)
        {
            cout<<arr[raw][column_end]<<" ";

        }
        column_end--;
        // for raw end
        for (int col = column_end; col >= column_start; col--)
        {
            /* code */
            cout<<arr[raw_end][col]<<" ";
        }
        raw_end--;
        // for colunm start
        for (int raw = raw_end; raw>= raw_start; raw++)
        {
            /* code */
            cout<<arr[raw][raw_start]<<" ";

        }
        column_start++;
        
        
    }

    return 0;
}