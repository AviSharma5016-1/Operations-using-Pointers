***

# **Pointers in C++**

## **Aim**
To understand and demonstrate:
- How pointer arithmetic works with different data types.
- How to find the distance between two pointers.
- How to traverse arrays in reverse using pointers.
- How to manipulate and reverse strings using pointers.

***

## **Theory**

### **1. Pointers and Memory Addresses**
A **pointer** is a variable that stores the memory address of another variable.  
Example:
```cpp
int x = 10;
int *p = &x; // p stores the address of x
```

- The pointer type determines how many bytes the pointer increments or decrements in memory.
  - `int*` → typically moves by 4 bytes.
  - `double*` → typically moves by 8 bytes.
  - `char*` → moves by 1 byte.
  - `float*` → typically moves by 4 bytes.
  - `bool*` → typically moves by 1 byte (system-dependent).

**Diagram: Pointer Arithmetic with int**

```
Address   Value
0x1000:   x = 15
0x1004:   (next int location)

int *p = &x;  p = 0x1000
p + 1 → 0x1004  // moves by 4 bytes (size of int)
```

***

### **2. Pointer Arithmetic**
Pointer arithmetic increments the pointer by the size of its base data type, not by one byte.  
If `p` is an `int*` pointing to address `2000` and `sizeof(int) = 4`, then:
```
p + 1 → 2004
```

**Diagram: Pointer Increment for Different Types**

| Type    | Address (initial) | Address (incremented by 1) |
|---------|-------------------|----------------------------|
| int     | 0x1000            | 0x1004                     |
| double  | 0x2000            | 0x2008                     |
| char    | 0x3000            | 0x3001                     |
| bool    | 0x4000            | 0x4001                     |
| float   | 0x5000            | 0x5004                     |

***

### **3. Pointer Subtraction**
When two pointers point to elements of the same array, subtracting them results in the number of elements between them, not the byte difference.

Example:
```cpp
int arr[10];
int *p1 = &arr[2];
int *p2 = &arr[7];
int diff = p2 - p1;  // diff = 5 elements
```

***

### **4. Backwards Traversal of Arrays Using Pointers**
You can start a pointer at the last array element and decrement it to traverse backwards through the array.

Example:
```cpp
int *p = arr + 4; // points to last element in a 5-element array
while (p >= arr) {
   cout << *p << " ";
   p--;
}
```

***

### **5. Pointer with Strings (Character Arrays)**
In C++, strings are arrays of characters ending with a null character (`'\0'`). Using pointers, you can:
- Traverse the string character by character.
- Reverse the string by starting from the end and moving backwards to the beginning.

***

## **Algorithms**

**1. Pointer Arithmetic with Various Data Types**
- Store the address of a variable in a pointer.
- Increment pointer.
- Observe how the address changes according to the size of the pointer's data type.

**2. Pointer Difference**
- Input values into an array.
- Use pointers to point to two different positions in the array.
- Subtract pointers to find the number of elements apart.

**3. Reverse Array Traversal**
- Set a pointer to the last element of the array.
- Print elements by decrementing the pointer until the start is reached.

**4. String Reversal Using Pointers**
- Input a string.
- Traverse with a pointer from start to end to print normally.
- Find string length, set pointer to last character.
- Traverse backwards to print characters in reverse.

***

## **Conclusion**
These programs demonstrate that pointers:
- Store memory addresses and perform arithmetic based on data type size.
- Allow calculation of element distance within arrays.
- Enable reverse traversal of arrays smoothly.
- Facilitate easy string handling and reversal by pointer manipulation.

Mastering pointer arithmetic is essential in C++ to efficiently handle arrays, strings, and dynamic memory. Understanding memory addresses and pointer behaviour enables deeper programming skills in system-level and performance-critical applications.

***
