/*
 * Google.cpp
 *
 * Implementation of the Google class.
 */

#include "Google.hpp"
#include <iostream>

/*
 * Builds the query string for the website.
 *
 */
void Google::buildQuery()
{
    std::cout << url << std::endl;
}

/*
* Constructor
*
* @param[in] query string that contains the query
*/
Google::Google(const std::string query)
{
    url = query;
}

