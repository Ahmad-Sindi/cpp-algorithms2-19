/* Algorithm Challenge & Problem Solving
 * 19 - Generate Random Numbers in Multiple Ranges
 *
 * This program demonstrates how to generate random numbers in C++
 * using rand(), srand(), and time(NULL). It also shows how to
 * limit the random output to specific digit ranges using modulo (%).
 *
 * A helper function RandomNumber(From, To) is also included to
 * generate random numbers inside a custom inclusive range.
 */

#include <iostream>
#include <cstdlib> // contains rand() and srand()
#include <ctime>   // contains time()

using namespace std;

// Generates a random integer between From and To (inclusive)
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

int main()
{
    // Seed the random number generator using the current time.
    // This ensures a different sequence each program run.
    srand((unsigned)time(NULL));

    cout << rand() << endl; // Random number: 0 → RAND_MAX

    cout << "\n---\n";
    cout << rand() % 10 << endl; // Random 1-digit number (0–9)

    cout << "\n---\n";
    cout << rand() % 100 << endl; // Random 2-digit number (0–99)

    cout << "\n---\n";
    cout << rand() % 1000 << endl; // Random 3-digit number (0–999)

    cout << "\n---\n";
    cout << rand() % 100000 << endl; // Random 5-digit number (0–99999)

    return 0;
}
