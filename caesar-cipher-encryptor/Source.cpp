#include <vector>
#include <numeric>
#include <string>
#include <iostream>



using namespace std;
char getNewLetter(char letter, int key);
string caesarCypherEncryptor(string str, int key);

int main()
{
    cout << caesarCypherEncryptor("xyz", 2);
    return 0;
}

string caesarCypherEncryptor(string str, int key) {
    // Write your code here.
    vector<char> newLetter;

    int newkey = key % 26;
    for (int i = 0; i < str.length(); i++)
    {
        newLetter.push_back(getNewLetter(str[i], newkey));
    }
    return string(newLetter.begin(), newLetter.end());
}

char getNewLetter(char letter, int key)
{
    int newLetterCode = letter + key;
    return newLetterCode <= 122 ? newLetterCode : 96 + newLetterCode % 122;
}
