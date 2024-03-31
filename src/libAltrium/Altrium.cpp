/*
 * Altrium.cpp
 * 
 * Implementation of the Altrium class.
*/

#include "Altrium.hpp"
#include "websites/Google.hpp"
#include "websites/StackOverflow.hpp"
#include "websites/Youtube.hpp"
#include <cstddef>

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
    // Trims the url which is in most cases argv[2]
    trim();

    // Selects which website class to use
    if (argv[1] == "g")
    {
        Google google(argv[2]);
        google.buildQuery();
    }
    else if (argv[1] == "s")
    {
        StackOverflow stackOverflow(argv[2]);
        stackOverflow.buildQuery();
    }
    else if (argv[1] == "y")
    {
        Youtube youtube(argv[2]);
        youtube.buildQuery();
    }
}

/*
* Trims both sides of the url
*/
void Altrium::trim()
{
    // Finds the index of first and last char that are not whitespace
    size_t first = argv[2].find_first_not_of(" \t\n\r");
    size_t last = argv[2].find_last_not_of(" \t\n\r");

    // If valid positions, than update the string to be between else set string to empty
    if (first != std::string::npos && last != std::string::npos)
    {
        argv[2] = argv[2].substr(first, last - first + 1);
    }
    else
    {
        argv[2] = "";
    }
}

/*
* Validates user input
*/
void Altrium::validate()
{}

