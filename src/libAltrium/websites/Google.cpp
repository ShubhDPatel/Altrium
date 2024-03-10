/*
 * Google.cpp
 *
 * Implementation of the Google class.
 */

#include "Google.hpp"
#include <iostream>
#include <algorithm>

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
    std::replace(url.begin(), url.end(), ' ', '+');
    std::cout << url << std::endl;
}

