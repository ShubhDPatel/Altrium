/*
 * Reddit.cpp
 *
 * Implementation of the Reddit class.
 */

#include "Reddit.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
Reddit::Reddit(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 *
 */
void Reddit::buildQuery()
{
    // Replace spaces with '+'
    std::replace(url.begin(), url.end(), ' ', '+');

    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"https://reddit.com/search/?q=" + url + "\"";
    system(fullCommand.c_str());
}

