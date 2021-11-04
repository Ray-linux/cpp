// questions are solve from "https://www.w3resource.com/cpp-exercises/for-loop/index.php" this page


#include <iostream>
using namespace std;
int main()
{
    int i;
    //  a program in C++ to find the first 10 natural numbers.
    /*for (i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;*/
    /* ***************************
        ************************
            ****************
                *********
                    **              */

    // a program in C++ to find the sum of first 10 natural numbers.
    /* int sum = 0;
    for(i=1;i<=10; i++){
        sum = sum + i;
        
    }
    cout<<sum<<endl; */

    /* ***************************
        ************************
            ****************
                *********
                    **              */

    // a program in C++ to display n terms of natural number and their sum
    /* int n;
    int sum = 0;
    cout<<"Put your input: ";
    cin>>n;
    for(i = 1; i<=n; i++){
        cout<<i<<" ";
        sum = sum +i;

    }
    cout<<endl;
    cout<<"The sum of the natural numbers upto "<<n<<" is: "<<sum<<endl; */
    /* ***************************
        ************************
            ****************
                *********
                    **              */

    // a program in C++ to find the perfect numbers between 1 and 500
    /*
    int a = 1, b = 1, sum = 0;
    cout << "The perfect numbers between 1 and 500" << endl;
    cout << " --------------------------------------" << endl;

    while (a <= 500)
    {
        while (b <= 500)
        {
            if (b < a){
                if(a%b==0){
                    sum = sum + b;
                }
            }
            b++;

        }
        if( sum == a){
            cout<<a<<" ";

        }
        a++;
        b =1;
        sum =0;
    }
    cout<<endl;
    */

    //  a program in C++ to check whether a number is prime or not




    return 0;
}