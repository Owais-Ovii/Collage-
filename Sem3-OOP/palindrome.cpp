#include<iostream>
#include<cstring> 

int main()
{
    int flag = 0, n;
    char str_1[20];

    std::cout << "Enter the maximum size for the string : ";
    std::cin >> n;
    std::cin.ignore(); 

    std::cout << "Enter the string: ";
    std::cin.getline(str_1, n);

    int length = std::strlen(str_1); 

    for(int i = 0; i < length / 2; i++)
    {
        if(str_1[i] != str_1[length - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        std::cout << "Not a palindrome" << std::endl;
    }
    else
    {
        std::cout << "Palindrome" << std::endl;
    }

    return 0;
}
