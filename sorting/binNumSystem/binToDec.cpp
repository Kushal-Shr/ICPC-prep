#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<int> myStack;

    // Zenith Tracer: Visualize the state after this loop completes
    for (int i = 1; i <= 5; i++)
    {
        myStack.push(i * 10);
    }

    // Place your cursor HERE to see the full stack of 5 elements
    return 0;
}