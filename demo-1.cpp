/*
    Errors: 
        Syntactical Error: Your Code is Not Formatted Correctly
            Intelligent Assistant Systems
        Logical Error: When the logic is not working based on the IPO
        Runtime Error: Error During Build/System is Running
*/

// Input age of user and name
// check the age if they can go for education

#include <iostream>

int main()
{
    std::string name, teacherChoice;
    int age, numberChoice;
    char letterChoice;

    std::cout 
        << "Hi! Welcome.\n"
        << "What's your name?\n"
        ;
    std::cin >> name; 

    std::cout << "What's your age?\n";
    std::cin >> age;

    system("cls");  // cleaning the screen | clear screen command

    // Logic: Error Trap - if the user inputted a proper age
    if (0 > age)
    {
        std::cout << "You inputted a wrong age" << std::endl;

        system("pause");

        return 0;
    }

    std::cout << "Hi! " << name << " your age is " << age << std::endl;

    // Response if either they can go to school or not
    if (3 <= age)
    {
        std::cout << "Welcome to schooling" << std::endl;

        if (3 <= age && 5 > age)
        {
            std::cout << "Welcome to Pre-School " << name << std::endl;
        } else if (5 <= age && 11 > age)
        {
            std::cout << "Welcome to Elementary" << std::endl;
        }else if (11 <= age && 15 > age)
        {
            std::cout << "Welcome to Junior High" << std::endl;
        }else if (15 <= age && 17 > age)
        {   
            std::cout << "Welcome to Senior High" << std::endl;
        }else if (17 <= age && 30 >= age)
        {   
            std::cout << "Welcome to College(Hell)" << std::endl;
        }else
        {
            std::cout << "YOUR OLD" << std::endl;
        }

    } else
    {
        std::cout << "Sorry wait until you get 3" << std::endl;
    }

    std::cout
        << "\n\n\n\n" 
        << "Whats your favorite Letter (only input lowercase): "
        ;
    std::cin >> letterChoice;

    // checking
    switch (letterChoice)
    {
    case 'a':
        std::cout << "A is for Apple" << std::endl;
        break;
    case 'b':
        std::cout << "B is for Ball" << std::endl;
        break;
    case 'c':
        std::cout << "C is for Carrot" << std::endl;
        break;
    default:
        std::cout << "Sorry but I don't recognize the Letter" << std::endl;
        break;
    }

    std::cout
        << "\n\n\n\n" 
        << "Whats your favorite number: "
        ;
    std::cin >> numberChoice;

    // checking
    switch (numberChoice)
    {
    case 1:
        std::cout << "Your 1" << std::endl;
        break;
    case 2:
        std::cout << "Your 2" << std::endl;
        break;
    case 3:
        std::cout << "Your 3" << std::endl;
        break;
    default:
        std::cout << "Sorry but I don't recognize the Number" << std::endl;
        break;
    }

    std::cout << "\n\n";

    system("pause"); // pausing before continue
    
    return 0;        // ending the code with 0 error
}

