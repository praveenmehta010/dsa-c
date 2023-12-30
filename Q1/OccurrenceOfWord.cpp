#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    string wordToFind = "Hello";
    char str[] = "Hello World Hello Earth Hello India Hello Delhi";
    int count = 0;
    char *word;
    vector<string> diffWord;
    word = strtok(str, " ");
    while (word != NULL)
    {
        diffWord.push_back(word);
        word = strtok(NULL, " ");
    }
    for (int i = 0; i < diffWord.size(); i++)
    {
        if (wordToFind == diffWord[i])
        {
            count++;
        }
    }
    cout<<"Hello World Hello Earth Hello India Hello Delhi"<<endl;
    cout<<wordToFind<<" comes "<<count<<" times in the paragraph";
    return 0;
};
