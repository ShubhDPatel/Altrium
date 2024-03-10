/*
* StackOverflow.cpp
*
* Implementation of the StackOverflow class
*/

#include "StackOverflow.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
StackOverflow::StackOverflow(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 *
 */
void StackOverflow::buildQuery()
{
    // Replace spaces with '+'
    std::replace(url.begin(), url.end(), ' ', '+');

    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"https://stackoverflow.com/search?q=" + url + "\"";
    system(fullCommand.c_str());
}

