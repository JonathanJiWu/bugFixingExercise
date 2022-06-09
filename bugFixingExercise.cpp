// bugFixingExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdint>
#include <iostream>

int main()
{
    constexpr int legalDrivingAgeTexas{16};
    std::cout << "How old are you?\n";

    int age{};
    std::cin >> age;

    std::cout << age << '\n';

    std::cout << "Allowed to drive a car in Texas [";

    if (age >= legalDrivingAgeTexas)
        std::cout << 'x';
    else
        std::cout << ' ';

    std::cout << "]\n";

    return 0;
}

//original 

//int main()
//{
//    std::cout << "How old are you?\n";
//
//    std::uint8_t age{};
//    std::cin >> age;
//
//    std::cout << "Allowed to drive a car in Texas [";
//
//    if (age >= 16)
//        std::cout << "x";
//    else
//        std::cout << " ";
//
//    std::cout << "]\n";
//
//    return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
