/*
* StackExchange.cpp
*
* Implementation of the StackExchange class
*/

#include "StackExchange.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
StackExchange::StackExchange(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 *
 */
void StackExchange::buildQuery()
{
    // Replace spaces with '+'
    std::replace(url.begin(), url.end(), ' ', '+');

    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"https://stackexchange.com/search?q=" + url + "\"";
    system(fullCommand.c_str());
}

