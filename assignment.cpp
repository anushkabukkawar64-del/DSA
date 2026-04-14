// // write a program to take two numbers as input and print their sum, difference, product, and quotient.
// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     cout << "Sum: " << num1 + num2 << endl;
//     cout << "Difference: " << num1 - num2 << endl;
//     cout << "Product: " << num1 * num2 << endl;
//     cout << "Quotient: " << num1 / num2 << endl;

//     return 0;
// }



// // write a program to swap two numbers using a third variable.
// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2, temp;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     temp = num1;
//     num1 = num2;
//     num2 = temp;

//     cout << "After swapping:" << endl;
//     cout << "First number: " << num1 << endl;
//     cout << "Second number: " << num2 << endl;

//     return 0;
// }




// // write a program to swap two numbers without using a third variable.
// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     num1 = num1 + num2;
//     num2 = num1 - num2;
//     num1 = num1 - num2;

//     cout << "After swapping:" << endl;
//     cout << "First number: " << num1 << endl;
//     cout << "Second number: " << num2 << endl;

//     return 0;
// }




// // write a program to check whether a number is even or odd.
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num % 2 == 0) {
//         cout << "The number is even." << endl;
//     } else {
//         cout << "The number is odd." << endl;
//     }

//     return 0;
// }


// // write a program to find the largest of three numbers.
// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2, num3;
//     cout << "Enter three numbers: ";
//     cin >> num1 >> num2 >> num3;

//     if (num1 >= num2 && num1 >= num3) {
//         cout << "The largest number is: " << num1 << endl;
//     } else if (num2 >= num1 && num2 >= num3) {
//         cout << "The largest number is: " << num2 << endl;
//     } else {
//         cout << "The largest number is: " << num3 << endl;
//     }

//     return 0;
// }



// // write a program to calculate the factorial of a number 
// #include <iostream>
// using namespace std;

// int main() {
//     int num, factorial = 1;
//     cout << "Enter a number: ";
//     cin >> num;

//     for (int i = 1; i <= num; i++) {
//         factorial *= i;
//     }

//     cout << "Factorial of " << num << " is: " << factorial << endl;
//     return 0;
// }


// // write a program to check whether a number is prime 
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     bool isPrime = true;

//     if (num <= 1) {
//         isPrime = false;
//     } else {
//         for (int i = 2; i <= num / 2; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }

//     if (isPrime) {
//         cout << num << " is a prime number." << endl;
//     }
//         else {
//             cout << num << " is not a prime number." << endl;
//         }
//     return 0;
// }



// // write a program to reverse a number.
// #include <iostream>
// using namespace std;

// int main() {
//     int num, reversed = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     while (num != 0) {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }

//     cout << "Reversed number: " << reversed << endl;
//     return 0;
// }


// // write a program to check whether a number is palindrome
// #include <iostream>
// using namespace std;

// int main() {
//     int num, originalNum, reversed = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     originalNum = num;

//     while (num != 0) {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }

//     if (originalNum == reversed) {
//         cout << originalNum << " is a palindrome number." << endl;
//     } else {
//         cout << originalNum << " is not a palindrome number." << endl;
//     }

//     return 0;
// }


// print numbers from 1 to 100 using a loop.
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        cout << i << " ";
    }
    return 0;
}

