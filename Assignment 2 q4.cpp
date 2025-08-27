
// part a
#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int i = 0;
    while (str1[i] != '\0') i++;

    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; 

    cout << "Concatenated string: " << str1 << endl;
    return 0;
}

//part b

// #include <iostream>
// using namespace std;

// int main() {
//     char str[100];
//     cout << "Enter a string: ";
//     cin.getline(str, 100);

//     int len = 0;
//     while (str[len] != '\0') len++;

//     for (int i = 0; i < len / 2; i++) {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }

//     cout << "Reversed string: " << str << endl;
//     return 0;
// }

// part c

// #include <iostream>
// using namespace std;

// bool isVowel(char c) {
//     if (c >= 'A' && c <= 'Z') c += 32;
//     return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
// }

// int main() {
//     char str[100], result[100];
//     cout << "Enter a string: ";
//     cin.getline(str, 100);

//     int j = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (!isVowel(str[i])) {
//             result[j++] = str[i];
//         }
//     }
//     result[j] = '\0';

//     cout << "String without vowels: " << result << endl;
//     return 0;
// }



// part d
// #include <iostream>
// using namespace std;

// int compareStr(const char a[], const char b[]) {
//     int i = 0;
//     while (a[i] != '\0' && b[i] != '\0') {
//         if (a[i] != b[i])
//             return a[i] - b[i];
//         i++;
//     }
//     return a[i] - b[i];
// }

// void copyStr(char dest[], const char src[]) {
//     int i = 0;
//     while (src[i] != '\0') {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
// }

// int main() {
//     int n;
//     cout << "Enter number of strings: ";
//     cin >> n;
//     cin.ignore();

//     char arr[100][100], temp[100];
//     for (int i = 0; i < n; i++) {
//         cout << "Enter string " << i + 1 << ": ";
//         cin.getline(arr[i], 100);
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (compareStr(arr[i], arr[j]) > 0) {
//                 copyStr(temp, arr[i]);
//                 copyStr(arr[i], arr[j]);
//                 copyStr(arr[j], temp);
//             }
//         }
//     }

//     cout << "\nStrings in alphabetical order:\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// part e
// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter an uppercase character: ";
//     cin >> ch;

//     if (ch >= 'A' && ch <= 'Z') {
//         ch = ch + 32;
//     }

//     cout << "Lowercase character: " << ch << endl;
//     return 0;
// }