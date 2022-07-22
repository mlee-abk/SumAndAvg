// SumAndAverageOfThree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Prompt user to enter 3 numbers
    std::cout << "Please enter 3 numbers, separated by spaces, and then hit Enter: ";

    //Take the 3 numbers as input
    int a;
    int b;
    int c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    //Return the Sum and Average

    int sum = a + b + c;
    double average = sum / 3.0;


    std::cout << a << " + " << b << " + " << c << " = " << sum << std::endl;

    std::cout << "The average of " << a << ", " << b << ", and " << c << " is " << average << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
