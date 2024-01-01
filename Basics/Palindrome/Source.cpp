#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void Palindrome(char word[])
{

    int end = 0, start, flag = 0;
    start = 0;
    end = strlen(word);
    while (start < end)
    {
        if (word[start] != word[end - 1])
        {
            flag = 1;
            break;
        }

        start++;
        end--;
    }
    if (!flag)
    {

        cout << "The word is palindrome" << endl;
    }

    else
    {
        cout << "The word is not palindrome" << endl;
    }
}

int main()
{
    int Num = 0;
    char W[20];
    cout << "Enter the word and press 0 to continue:" << endl;
    cin >> W >> Num;
    if (!Num)
    Palindrome(W);
    return 0;

}