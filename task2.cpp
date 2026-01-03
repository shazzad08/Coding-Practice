#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipherText;
    cout << "Enter ciphertext: ";
    getline(cin, cipherText);

    cout << "\n--- All Possible Decryptions ---\n";


    for (int key = 1; key <= 25; key++) {
        string decryptedText = cipherText;

        for (int i = 0; i < cipherText.length(); i++) {
            char ch = cipherText[i];


            if (ch >= 'A' && ch <= 'Z') {
                decryptedText[i] =
                    char((ch - 'A' - key + 26) % 26 + 'A');
            }

            else if (ch >= 'a' && ch <= 'z') {
                decryptedText[i] =
                    char((ch - 'a' - key + 26) % 26 + 'a');
            }
        }

        cout << "Shift " << key << " : " << decryptedText << endl;
    }

    return 0;
}

