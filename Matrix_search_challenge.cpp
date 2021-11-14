#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int terget;
    cin >> terget;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int r=0 , c = m-1;
    bool found = false;
    while (r<n and c>=0)
    {
        if (arr[r][c] == terget)
        {
            found =true;
        }
        if (arr[r][c]>terget)
        {
            c--;
        }
        else{
            r++;
        }

        
    }
    if (found=true)
    {
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element doesn't found"<<endl;
    }
    
    

    return 0;
}