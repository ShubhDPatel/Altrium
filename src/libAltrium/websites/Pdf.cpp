/*
* Pdf.cpp
*
* Implementation of the Pdf class.
*/

#include "Pdf.hpp"
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
Pdf::Pdf(const std::string query)
{
    url = query;
}

/*
 * Builds the query string for the website.
 *
 */
void Pdf::buildQuery()
{
}

