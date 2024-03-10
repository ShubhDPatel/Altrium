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
 * @param[in] query string that contains unformatted query
 */
void Google::buildQuery()
{
}

/*
* Constructor
*
* @param[in] query string that contains unformatted query
*/
Google::Google(const char* query)
{
    url = std::string(query);
}

