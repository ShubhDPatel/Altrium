/*
* Google.hpp
*
* Include file for the Google search engine.
*/

#ifndef GOOGLE_HPP
#define GOOGLE_HPP

#include "Website.hpp"
#include <string>

class Google : public Website
{
public:
    /*
    * Builds the query string for the website.
    *
    * @param[in] query string that contains unformatted query
    */
    void buildQuery() override;

    Google(char* query);
};

#endif

