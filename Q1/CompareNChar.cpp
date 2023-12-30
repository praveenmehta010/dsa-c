#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    string str1 = "Hello World";
    string str2 = "Hello Other World";
    int noOfCharToCheck = 7;
    bool flag = false;

    for (int i = 0; i < noOfCharToCheck; i++)
    {
        if (str1[i] == str2[i])
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "First " << noOfCharToCheck << " char of '" << str1 << "' is equal to '" << str2 << "'" << endl;
    }
    else
    {
        cout << "First " << noOfCharToCheck << " char of '" << str1 << "' is not equal to '" << str2 << "'" << endl;
    }

    return 0;
};
