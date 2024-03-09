/*
 * Altrium.cpp
 * 
 * Implementation of the Altrium class.
*/

#include "Altrium.hpp"
#include <string>
<<<<<<< HEAD
<<<<<<< HEAD
#include "websites/Google.hpp"
=======
#include "websites/Website.hpp"
>>>>>>> parent of 077f746 (Change buildQuery() to virtual member)
=======
>>>>>>> parent of ca15196 (Remove default constructor on virtual class)

/*
* Entry point for the altrium application.
*
* @param[in] argc number of command line arguments
* @param[in] argv array of command line arguments
*/
void Altrium::parse(int argc, char* argv[])
{
    // Converts 2nd input parameter to a string
    std::string input = std::string(argv[1]);

    // Selects which website class to use
    if (input == "g")
    {
    }
}

