/*
 * Wikipedia.cpp
 *
 * Implementation of the Wikipedia class.
 */

#include "Wikipedia.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
Wikipedia::Wikipedia(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 *
 */
void Wikipedia::buildQuery()
{
    // Replace spaces with '+'
    std::replace(url.begin(), url.end(), ' ', '+');

    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"https://en.wikipedia.org/w/index.php?search=" + url + "\"";
    system(fullCommand.c_str());
}

