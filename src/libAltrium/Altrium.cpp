/*
 * Altrium.cpp
 * 
 * Implementation of the Altrium class.
*/

#include "Altrium.hpp"
#include <string>
#include "websites/Google.hpp"

/*
* Entry point for the altrium application.
*/
void Altrium::parse()
{
    // Converts 2nd input parameter to a string
    std::string input = std::string(argv[1]);

    // Selects which website class to use
    if (input == "g")
    {
        Google google(argv[2]);
        google.buildQuery();
    }
}

/*
* Constructor
*
* @param[in] argc number of command line arguments
* @param[in] argv array of command line arguments
*/
Altrium::Altrium(int argc, char* argvInput[]) : argc(argc)
{
    // Allocates memory for the command line arguments
    argv = std::make_unique<std::string[]>(argc);

    // Convert each command line argument to a std::string
    for (int i = 0; i < argc; ++i)
    {
        argv[i] = std::string(argvInput[i]);
    }
}

