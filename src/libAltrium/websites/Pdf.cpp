/*
* Pdf.cpp
*
* Implementation of the Pdf class.
*/

#include "Pdf.hpp"
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
    // Launchs the query
    std::string fullCommand = "cmd.exe /c start \"\" \"file://wsl.localhost/Ubuntu${PWD}/" + url + "\"";
    system(fullCommand.c_str());
}

