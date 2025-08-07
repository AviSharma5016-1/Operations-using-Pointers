#include <iostream>
using namespace std;
int main() {
    int x = 15;
    int *p = &x;
    cout << "Address: " << p << endl;
    p = p + 1;
    cout << "Incremented address: " << p << endl;
    
    cout<<endl;
    
    double y = 20.5;
    double *q = &y;
    cout << "Address of double variable: " << q << endl;
    q = q + 1;
    cout << "Incremented address of double variable: " << q << endl;

    cout<<endl;
    
    char z = 'A';
    char *r = &z;
    cout << "Address of char variable: " << (void*)r << endl;
    r = r + 1;
    cout << "Incremented address of char variable: " << (void*)r << endl;

    cout<<endl;

    bool flag = true;
    bool *s = &flag;
    cout << "Address of bool variable: " << s << endl;
    s = s + 1;
    cout << "Incremented address of bool variable: " << s << endl;
    
    cout<<endl;

    float w = 10.5;
    float *t = &w;
    cout << "Address of float variable: " << t << endl;
    t = t + 1;
    cout << "Incremented address of float variable: " << t << endl;
    
    return 0;
}

/*OUTPUT
Address: 0x61fef8
Incremented address: 0x61fefc

Address of double variable: 0x61fef0
Incremented address of double variable: 0x61fef8

Address of char variable: 0x61feef
Incremented address of char variable: 0x61fef0

Address of bool variable: 0x61feee
Incremented address of bool variable: 0x61feef

Address of float variable: 0x61fee8
Incremented address of float variable: 0x61feec
  */
