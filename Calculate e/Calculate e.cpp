// This program will calculate e

#include <iostream>
using namespace std;

int main()
{
    //n = input
    //fact = factorial
    //i = index
    //e = calculated value
    long double n, i, fact, e = 1;

    cout << "This program will calculate e (Euler\'" << "s Number) using the below continuous sum:\n\n";
    cout << "         1    1    1\n";
    cout << "e = 1 + -- + -- + -- + ...\n";
    cout << "        1!   2!   3!\n\n";

    cout << "Enter the number of terms to calculate: ";
    cin >> n;

    i = n;
    fact = n;

    for (int j = 0; j < n; j++)
    {
        //Loops to calculate factorial of n
        for (int k = 1; k < i; k++)
        {
            fact *= (i - k);
        }

        cout << "fact = " << fact << endl;
        e += (1 / fact);
        cout << "e = " << e << endl;
        cout << "i = " << i << endl;
        i--;
        cout << "i = " << i << endl;
        fact = i;
        }

    //Output of e
    cout << "e calculated to " << n << " terms of the infinite sum is " << e << "\n";

}
