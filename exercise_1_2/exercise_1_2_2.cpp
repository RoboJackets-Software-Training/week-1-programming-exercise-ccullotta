#include <iostream>
using namespace std;
int main()
{
    // Part 2: Palindrome Check

    // Input string from command-line
    std::string str;
    std::cout << "Enter String:" << std::endl;
    std::cin >> str;

    // Palindrome Check
    // WRITE YOUR PALINDROME CHECK HERE
    bool is_palindrome = true;
    int left = 0;
    int right = str.length() - 1;
    while (left < right){
    	if (str[left] != str[right]){
    		is_palindrome = false;
    		break;
    	} else {
    		left++;
    		right--;
    	}
    }
    cout << boolalpha <<"result is: " << is_palindrome;
    return 0;
}
