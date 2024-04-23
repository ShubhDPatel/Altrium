/*
* Github.hpp
*
* Include file for the Github class.
*/

#ifndef GITHUB_HPP
#define GITHUB_HPP

#include "Website.hpp"
#include <string>

class Github : public Website
{
public:

    /*
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    Github(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif

