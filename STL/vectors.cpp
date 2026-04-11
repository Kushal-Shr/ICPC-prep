#include <iostream>
#include <vector>
// vector is a dynamic array

using namespace std;

int main()
{
    vector<int> vec;
    cout << "SIZE: " << vec.size() << endl;
    cout << "CAPACITY: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "SIZE: " << vec.size() << endl;
    cout << "CAPACITY: " << vec.capacity() << endl;

    vec.push_back(2);
    vec.push_back(3); // capacity doubles in every resize when capacity gets full
    cout << "SIZE: " << vec.size() << endl;
    cout << "CAPACITY: " << vec.capacity() << endl;

    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    for (auto val : vec)
        cout << val << " ";
    cout << endl;

    cout << "First element is: " << vec.front() << endl;
    cout << "Last element is: " << vec.back() << endl;

    vec.pop_back();

    for (auto val : vec)
        cout << val << " ";
    cout << endl;

    vec.erase(vec.begin());

    for (auto val : vec)
        cout << val << " ";
    cout << endl;

    vec.erase(vec.begin(), vec.end() - 2);

    for (auto val : vec)
        cout << val << " ";
    cout << endl;

    vec.insert(vec.begin(), 2);
    vec.insert(vec.begin() + 1, 3);

    for (auto val : vec)
        cout << val << " ";
    cout << endl;

    vec.clear();

    cout << "SIZE: " << vec.size() << endl;
    cout << "CAPACITY: " << vec.capacity() << endl;

    cout << "IS EMPTY? " << vec.empty() << endl;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << "IS EMPTY? " << vec.empty() << endl;

    cout << "vec.begin(): " << *(vec.begin()) << endl;
    cout << "vec.end(): " << *(vec.end() + 2) << endl; //

    return 0;
}