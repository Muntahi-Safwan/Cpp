#include <iostream>
using namespace std;

int main()
{

    char character;
    cout << "Enter a character: ";
    cin >> character;

    // First check whether the input is a valid alphabet letter or not
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {

        // Convert to lowercase for easier comparison
        character = tolower(character);

        // Check if it's a vowel
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        {
            cout << "It's a vowel." << endl;
        }
        else
        {
            cout << "It's a consonant." << endl;
        }
    }
    else
    {
        // Non-alphabet character
        cout << "Not a character." << endl;
    }

    return 0;
}
