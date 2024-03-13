#include <iostream>
#include <cstring>
#include <cctype>

void showAddress(const char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        std::cout << "Address of " << str[i] << ": " << static_cast<void*>(&str[i]) << std::endl;
    }
}

void concatenateStrings(char* str1, const char* str2) {
    strcat(str1, str2);
}

int compareStrings(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}

int stringLength(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void toUpperCase(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = std::toupper(str[i]);
    }
}

void reverseString(char* str) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; ++i) {
        std::swap(str[i], str[len - i - 1]);
    }
}

void insertString(char* str, const char* insertStr, int pos) {
    int len = stringLength(str);
    if (pos < 0 || pos > len) {
        std::cout << "Invalid position." << std::endl;
        return;
    }
    strcat(str + pos, insertStr);
}

int main() {
    char str1[100], str2[50];
    std::cout << "Enter a string: ";
    std::cin.getline(str1, 100);
    std::cout << "Enter another string: ";
    std::cin.getline(str2, 50);

    // Example usage of menu-driven operations
    // Choose the operation you want
    // switch(operation) {
    //     case 'a': showAddress(str1); break;
    //     case 'b': concatenateStrings(str1, str2); break;
    //     case 'c': compareStrings(str1, str2); break;
    //     case 'd': stringLength(str1); break;
    //     case 'e': toUpperCase(str1); break;
    //     case 'f': reverseString(str1); break;
    //     case 'g': insertString(str1, str2, pos); break;
    //     default: std::cout << "Invalid operation." << std::endl;
    // }

    return 0;
}
