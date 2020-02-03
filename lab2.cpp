// problem 1 

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, r, sum=0;
    cout << "\n\n Find the sum of digits of a given number:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a number: ";
    cin >> num1;
    num2 = num1;
    while (num1 > 0) 
    {
        r = num1 % 10;
        num1 = num1 / 10;
        sum = sum + r;
    }
    cout << " The sum of digits of " << num2 << " is: " << sum << endl;
}

// problem 2 
#include <iostream>
using namespace std;
int main()
{
    int n, reversedNumber = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    cout << "Reversed Number = " << reversedNumber;
    return 0;
}

// problem 3
