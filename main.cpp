#include <iostream>
#include <string>

using namespace std;

string encrypt(string text)
{
    string temp = "";

    for (int i = 0; i < text.length(); i++)
    {
        temp += (char)((int)text[i] - 1);
    }

    return temp;
}

string decrypt(string text)
{
    string temp = "";

    for (int i = 0; i < text.length(); i++)
    {
        temp += (char)((int)text[i] + 1);
    }

    return temp;
}

int programm()
{
    string text = "";
    int choice = -1;

    cout << "1. encrypt\n";
    cout << "2. decrypt\n";
    cout << "3. exit\n";

    cout << "> ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "text for encrypt: ";
        cin >> text;

        cout << "----------------------" << endl;
        cout << "result: " << encrypt(text) << endl;
        cout << "------------------------" << endl;
    }
    else if (choice == 2)
    {
        cout << "text for decrypt: ";
        cin >> text;

        cout << "------------------------" << endl;
        cout << "result: " << decrypt(text) << endl;
        cout << "------------------------" << endl;
    }
    else if (choice == 3)
    {
        return 0;
    }
    else
    {
        cout << "Invalid choice. Please try again." << endl;
    }

    return 1;
}

int main()
{
    while (programm()) {}
    return 0;
}
