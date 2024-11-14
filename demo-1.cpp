/*
    Errors:
        Syntactical Error: Your Code is Not Formatted Correctly
            Intelligent Assistant Systems
        Logical Error: When the logic is not working based on the IPO
        Runtime Error: Error During Build/System is Running
*/

/*
	Cases
	- camelCase
		- camelLongerNameCase
	- snake_Camel_Case
	- PascalCase
		- PascalLongerNameCase
	- Snake_Pascal_Case
	- snake_lower_case
	- SNAKE_SCREAMING_CASE

	1. Naming Convention
		variable - camelCase (-10%)
		constant - SNAKE_SCREAMING_CASE (-10%)
	2. Naming should make sense & Use only global abbreviation
	3. Code Construction (-2%)
		{
			constant variable
			variable

			code block
		}
	4. Refrain using Global Variable (automatic 0)

*/

// Input age of user and name
// check the age if they can go for education

#include <iostream>

int main()
{
    std::string name, teacherChoice;
    int age, numberChoice;
    char letterChoice;

    // 1. Welcome Message - (Display - cout)
    std::cout
        << "Hi! Welcome.\n"
        << "What's your name?\n"
        ;
    // 2. Input - cin
    std::cin >> name;

    std::cout << "What's your age?\n";
    std::cin >> age;

    system("cls");  // 3. cleaning the screen | clear screen command

    // 4. Logic: Error Trap - if the user inputted a proper age
    // Demo of If condition
    if (0 > age)
    {
        // 4.1 Prompt a feed back of the error 
        std::cout << "You inputted a wrong age" << std::endl;

        system("pause");    // 4.2 pause the terminal for a while before continuing

        std::exit(0);   // 4.3 exit with no error or 0
    }
    // 4.2 Continue below if condition is not true

    // 5. Display and use variable in cout
    std::cout << "Hi! " << name << " your age is " << age << std::endl;

    // 6. Response if either they can go to school or not
    // Demo of If else
    if (3 <= age)
    {
        // 6.1.1 They are welcomed in school
        std::cout << "Welcome to schooling" << std::endl;

        // 6.1.2.1 check if age is 3 - 4
        // Demo of If else chain
        if (3 <= age && 5 > age)
        {
            std::cout << "Welcome to Pre-School " << name << std::endl;
        }
        // 6.2.2.2 if not it will check if age is 5 - 10
        else if (5 <= age && 11 > age)
        {
            std::cout << "Welcome to Elementary" << std::endl;
        }
        // 6.2.2.3 if not it will check if age is 11 - 14
        else if (11 <= age && 15 > age)
        {
            std::cout << "Welcome to Junior High" << std::endl;
        }
        // 6.2.2.4 if not it will check if age is 15 - 17
        else if (15 <= age && 17 > age)
        {
            std::cout << "Welcome to Senior High" << std::endl;
        }
        // 6.2.2.5 if not it will check if age is 17 - 30
        else if (17 <= age && 30 >= age)
        {
            std::cout << "Welcome to College(Hell)" << std::endl;
        }
        // 6.2.2.6 if non of the condition match it will prompt the cout here
        else
        {
            std::cout << "YOUR OLD" << std::endl;
        }
    }
    else
    {
        // 6.2 if they are lower than 3
        std::cout << "Sorry wait until you get 3" << std::endl;
    }

    std::cout
        << "\n\n\n\n"
        << "Whats your favorite Letter a, b, c (only input lowercase): "
        ;
    std::cin >> letterChoice;

    // 7. Will base on letterChoice the comparison of constant cases in char
    switch (letterChoice)
    {
        // 7.1 If it matches the a
    case 'a':
        std::cout << "A is for Apple" << std::endl;
        break;
        // 7.2 If it matches the b
    case 'b':
        std::cout << "B is for Ball" << std::endl;
        break;
        // 7.3 If it matches the c
    case 'c':
        std::cout << "C is for Carrot" << std::endl;
        break;
        // 7.4 none matches
    default:
        std::cout << "Sorry but I don't recognize the Letter" << std::endl;
        break;
    }

    std::cout
        << "\n\n\n\n"
        << "Whats your favorite number: "
        ;
    std::cin >> numberChoice;

    // 8. Will base on letterChoice the comparison of constant cases in number
    switch (numberChoice)
    {
        // 8.1 if it matches the 1
    case 1:
        std::cout << "Your 1" << std::endl;
        break;
        // 8.2 if it matches the 2
    case 2:
        std::cout << "Your 2" << std::endl;
        break;
        // 8.3 if it matches the 3
    case 3:
        std::cout << "Your 3" << std::endl;
        break;
        // 8.4 none matches
    default:
        std::cout << "Sorry but I don't recognize the Number" << std::endl;
        break;
    }

    std::cout << "\n\n";

    system("pause"); // pausing before continue

    return 0;        // ending the code with 0 error
}
