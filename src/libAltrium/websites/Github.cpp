/*
 * Github.cpp
 *
 * Implementation of the Github class.
 */

#include "Github.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
Github::Github(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 *
 */
void Github::buildQuery()
{
    // Replace spaces with '+'
    std::replace(url.begin(), url.end(), ' ', '+');

    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"https://github.com/search?q=" + url + "\"";
    system(fullCommand.c_str());
}

