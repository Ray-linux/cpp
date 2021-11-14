#include <iostream>
using namespace std;
int main()
{
    // chach palindrome
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check = true;
    for (int  i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
        
    }
    if (check = true)
    {
        cout<<"The given word is palindrom"<<endl;
    }
    else{
        cout<<"The given word is not a palindrom"<<endl;
    }
    return 0;
}   