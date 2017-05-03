#include <iostream>
#include <algorithm>
#include <string>

bool checkPalindrome(std::string inputString)
{
    std::transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);
    std::string s = inputString.substr();
    std::cout << "s: " << s << std::endl;
    std::reverse(s.begin(), s.end());
    
    if (inputString.compare(s) != 0)
        return false;
    else
        return true;
}


int main(int argc, char *argv[])
{
    
    std::string str = "";
    std::string result = "";

    for (int i = 1; i < argc; i++)
    {
        if (i != 1)
            str.append(" ");
        str.append(argv[i]);
    }

    if (checkPalindrome(str) != 0)
        std::cout << "Yes, '" << str << "' is a palindrome.\n";
    else
        std::cout << "No, '" << str << "' is NOT a palindrome.\n";
    return 0;
}
