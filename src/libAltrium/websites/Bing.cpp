/*
 * Bing.cpp
 *
 * Implementation of the Bing class.
 */

#include "Bing.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
Bing::Bing(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 */
void Bing::buildQuery()
{
    // Replace spaces with '+'
    std::replace(url.begin(), url.end(), ' ', '+');

    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"https://bing.com/search?q=" + url + "\"";
    system(fullCommand.c_str());
}

