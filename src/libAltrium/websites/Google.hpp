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
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    Google(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif

