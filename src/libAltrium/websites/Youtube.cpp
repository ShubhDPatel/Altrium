/*
 * Youtube.cpp
 *
 * Implementation of the Youtube class.
 */

#include "Youtube.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
Youtube::Youtube(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 *
 */
void Youtube::buildQuery()
{
    // Replace spaces with '+'
    std::replace(url.begin(), url.end(), ' ', '+');

    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"https://youtube.com/results?seed=1&q=" + url + "\"";
    system(fullCommand.c_str());
}

