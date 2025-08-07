#include <iostream>
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    char *p = str;
    cout << "Entered string: ";
    while (*p) {
        cout << *p;
        p++;
    }
    cout << endl;

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char *r = str + length - 1;
    cout << "Reversed string: ";
    while (r >= str) {
        cout << *r;
        r--;
    }
    cout << endl;

    return 0;
}


/*OUTPUT
Enter a string: Hello
Entered string: Hello
Reversed string: olleH
*/
