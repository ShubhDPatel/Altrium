/*
* Bing.hpp
*
* Include file for the Bing search engine.
*/

#ifndef BING_HPP
#define BING_HPP

#include "Website.hpp"
#include <string>

class Bing : public Website
{
public:

    /*
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    Bing(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif

