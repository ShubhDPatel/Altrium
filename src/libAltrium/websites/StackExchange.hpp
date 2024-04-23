/*
* StackExchange.hpp
*
* Header file for the StackExchange class
*/

#ifndef STACKEXCHANGE_HPP
#define STACKEXCHANGE_HPP


#include "Website.hpp"
#include <string>

class StackExchange : public Website
{
public:

    /*
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    StackExchange(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif

