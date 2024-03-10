/*
* StackOverflow.hpp
*
* Header file for StackOverflow class
*/

#ifndef STACKOVERFLOW_HPP
#define STACKOVERFLOW_HPP


#include "Website.hpp"
#include <string>

class StackOverflow : public Website
{
public:

    /*
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    StackOverflow(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif
