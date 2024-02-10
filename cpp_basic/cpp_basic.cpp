

#include <iostream>
#include <String>
#include <vector>
#include "Employee.h"

using namespace std;

// function
void sayHi(string);
int add(int, int);

// struct
struct employee {
    // structure constructor
    employee():name(""), age(23), status(true) {}
    string name;
    int age;
    bool status;
};

int main()
{
    // Output
    cout << "Hello World!\n";

    // Variable
    int varInt = 23;                // 2 or 4 byte
    double varDouble = 23.23;       // 8 byte 15decimal
    float varFloat = 23.24;         // 4 byte 7decimal
    char varChar = 'A';             // 1 byte
    string varString = "Chanadee";
    bool varBool = true;            // 1byte
    float varFloat_e = 5e3;         // 5000
    double varDouble_E = 5E10;

    /* Declare mutiple variable */
    int varOne = 1, varTwo = 2, varThree = 3;
    int One, one;
    One = one = 1;

    /* Constant variable */
    const int varConstant = 10;
    cout << "number: " << varDouble_E << "," << "name: " << varString << endl;

    // Input
    string userName;
    cout << "Your name: ";
    //!! Note: cin not consider whitespace
    //cin >> userName; // Your name: chandee hk
    getline(cin, userName);
    cout << "Hello " << userName << endl; // chanadee
    // Use getline() function to read a line
    
    

    // String
    cout << "---------- String ------------" << endl;
    string stringTxt = "ABCdefg";
    cout << stringTxt.length() << endl;
    cout << stringTxt.size() << endl;
    cout << stringTxt[1] << endl;

    int firstInt = 1, secondInt = 2;
    /* shorthand condition */
    bool moreThan = firstInt < secondInt ? true : false;
    
    if (moreThan && true) {
        cout << "fistInt is less than secondInt " << endl;
    } else {
        cout << "firstInt is more than secondInt " << endl;
    }

    // Array
    cout << "---------- Array ------------" << endl;
    int names[] = { 10, 20, 300, 400 };
    int namesLength = sizeof(names) / sizeof(int);
    // foreach
    cout << "Size of names: " << namesLength << endl;
    for (int name : names) {
        cout << name << endl;
    }

    // Function
    cout << "---------- Function ------------" << endl;
    sayHi("John doe");
    cout << "add function result: " << add(2, 3) << endl;

    // Structure (struct)
    cout << "---------- Structure ------------" << endl;
    employee emp1;
    emp1.name = "Beer";
    cout << emp1.name << endl;

    // References
    cout << "---------- References ------------" << endl;
    string iamSay = "Hello i' am beer";
    string& copySay = iamSay;
    string not_ref = iamSay;
    cout << "original address: " << &iamSay << endl;
    cout << " Using &: " << copySay << ", Address: " << &copySay << endl;
    cout << "Not use &: " << not_ref << ", Address: " << &not_ref << endl;

    // Pointer :storage address of variable
    cout << "---------- Pointer ------------" << endl;
    int number = 100;
    string letter = "ABC";
    /* Question: Where is number variable storage?*/
    /* Answer: use pointer to point to the memory location */
    int* p_number = &number;
    string* p_letter = &letter;
    cout << "number = " << number << ", Address: " << p_number << endl;
    cout << "letter = " << letter << ", Address: " << p_letter << endl;
    
    // Vector : vector are like array.
    cout << "---------- Vector ------------" << endl;
    vector<int> score = { 1,2,3,4,5,6,7,8,9,10 };
    /* Access member of score */
    score.at(0) = 100;
    cout << score.at(0) << endl;
    cout << "Size: " << score.size() << endl;
    score.push_back(400);
    cout << "Last index: " << score.back() << endl;

    // Import class
    Employee emp_class;
    emp_class.name = "Chanadee";
    cout << "Class Employee Name: " << emp_class.name << endl;
    return 0;


}

void sayHi(string name) {
    cout << "Hello "<< name << " use function sayHi()" << endl;
}

int add(int a, int b) {
    return a + b;
}
