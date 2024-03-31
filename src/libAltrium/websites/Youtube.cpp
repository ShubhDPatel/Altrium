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
}

