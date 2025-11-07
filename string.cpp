#include <iostream>
#include <cstring>  // For strlen, strncmp, strncat, strchr, strstr

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    char str3[] = "Hello, Universe!";
    char str4[] = "Universe";

    // strlen: Get the length of str2
    std::cout << "Length of str2: " << strlen(str2) << std::endl;

    // strncmp: Compare first 5 characters of str1 and str3
    if (strncmp(str1, str3, 5) == 0)
        std::cout << "First 5 characters of str1 and str3 are equal." << std::endl;
    else
        std::cout << "First 5 characters of str1 and str3 are NOT equal." << std::endl;

    // strncat: Append first 3 characters of str2 to str1
    strncat(str1, str2, 3);  // str1 becomes "Hello, Wor"
    std::cout << "After strncat: str1 = " << str1 << std::endl;

    // strchr: Find the first occurrence of 'U' in str3
    char* posChar = strchr(str3, 'U');
    if (posChar)
        std::cout << "'U' found in str3 at position: " << (posChar - str3) << std::endl;
    else
        std::cout << "'U' not found in str3." << std::endl;

    // strstr: Find the substring "Universe" in str3
    char* posSubstr = strstr(str3, str4);
    if (posSubstr)
        std::cout << "\"" << str4 << "\" found in str3 at position: " << (posSubstr - str3) << std::endl;
    else
        std::cout << "\"" << str4 << "\" not found in str3." << std::endl;

    return 0;
}
