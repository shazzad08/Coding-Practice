#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, key;
    string text;

    cout << "1. Encryption\n";
    cout << "2. Decryption\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter shift key: ";
    cin >> key;

    key = key % 26;

    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];


        if (ch >= 'A' && ch <= 'Z') {
            if (choice == 1) {
                text[i] = char((ch - 'A' + key) % 26 + 'A');
            } else {
                text[i] = char((ch - 'A' - key + 26) % 26 + 'A');
            }
        }


        else if (ch >= 'a' && ch <= 'z') {
            if (choice == 1) {
                text[i] = char((ch - 'a' + key) % 26 + 'a');
            } else {
                text[i] = char((ch - 'a' - key + 26) % 26 + 'a');
            }
        }
    }

    if (choice == 1)
        cout << "Ciphertext: " << text << endl;
    else
        cout << "Plaintext: " << text << endl;

    return 0;
}
