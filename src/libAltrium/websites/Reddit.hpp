/*
* Reddit.hpp
*
* Include file for the Reddit class
*/

#ifndef REDDIT_HPP
#define REDDIT_HPP

#include "Website.hpp"
#include <string>

class Reddit : public Website
{
public:

    /*
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    Reddit(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif
