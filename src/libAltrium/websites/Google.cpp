/*
 * Google.cpp
 *
 * Implementation of the Google class.
 */

#include "Google.hpp"
#include <string>

/*
 * Builds the query string for the website.
 *
 */
void Google::buildQuery()
{
}

/*
* Constructor
*
* @param[in] query string that contains the query
*/
Google::Google(const char* query)
{
    url = std::string(query);
}

