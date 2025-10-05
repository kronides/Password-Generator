#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                       'n','o','p','q','r','s','t','u','v','w','x','y','z',
                       'A','B','C','D','E','F','G','H','I','J','K','L','M',
                       'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    char symbols[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')'};

    int numsize = sizeof(numbers) / sizeof(numbers[0]);
    int alphasize = sizeof(alphabet) / sizeof(alphabet[0]);
    int symsize = sizeof(symbols) / sizeof(symbols[0]);

    int length;
    cout << "Enter Password Length:\n";
    cin >> length;

    srand(time(0));

    cout << "Generated Password: ";

    for (int i = 0; i < length; i++) {
        int choice = rand() % 3;

        if (choice == 0) {
            cout << numbers[rand() % numsize];
        } else if (choice == 1) {
            cout << alphabet[rand() % alphasize];
        } else {
            cout << symbols[rand() % symsize];
        }
    }

    cout << endl;
}
