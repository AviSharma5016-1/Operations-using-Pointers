#include <iostream>
using namespace std;
int main() {
    int arr[10];
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int *p1 = &arr[2];
    int *p2 = &arr[7];
    cout << "Difference: " << (p2 - p1) << endl;
    return 0;
}


/*OUTPUT
Difference is: 5
*/
