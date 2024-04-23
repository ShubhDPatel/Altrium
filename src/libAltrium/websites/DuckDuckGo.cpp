/*
 * DuckDuckGo.cpp
 *
 * Implementation of the DuckDuckGo class.
 */

#include "DuckDuckGo.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
DuckDuckGo::DuckDuckGo(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 */
void DuckDuckGo::buildQuery()
{
    // Replace spaces with '+'
    std::replace(url.begin(), url.end(), ' ', '+');

    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"https://duckduckgo.com/?q=" + url + "\"";
    system(fullCommand.c_str());
}

