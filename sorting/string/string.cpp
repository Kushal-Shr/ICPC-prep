#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Kushal";
    cout << str1 << endl;

    string str2 = "Shrestha";
    cout << str2 << endl;

    string str3 = str1 + ' ' + str2;
    cout << str3 << endl;

    cout << (str1 != str2) << endl;

    cout << "Size: " << str3.length() << endl;

    return 0;
}