/*
 * Google.cpp
 *
 * Implementation of the Google class.
 */

#include "Google.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
Google::Google(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 *
 */
void Google::buildQuery()
{
    // Replace spaces with '+'
    std::replace(url.begin(), url.end(), ' ', '+');

    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"https://google.com/search?q=" + url + "\"";
    system(fullCommand.c_str());
}

