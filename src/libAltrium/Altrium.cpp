/*
 * Altrium.cpp
 * 
 * Implementation of the Altrium class.
*/

#include "Altrium.hpp"
#include "websites/Google.hpp"

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

/*
* Entry point for the altrium application.
*/
void Altrium::parse()
{
    // Selects which website class to use
    if (argv[1] == "g")
    {
        Google google(argv[2]);
        google.buildQuery();
    }
}

