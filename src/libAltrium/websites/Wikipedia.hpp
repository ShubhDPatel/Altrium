/*
* Wikipedia.hpp
*
* Include file for the Wikipedia class.
*/

#ifndef WIKIPEDIA_HPP
#define WIKIPEDIA_HPP

#include "Website.hpp"
#include <string>

class Wikipedia : public Website
{
public:

    /*
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    Wikipedia(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif

