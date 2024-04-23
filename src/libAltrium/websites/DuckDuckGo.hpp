/*
* DuckDuckGo.hpp
*
* Include file for the DuckDuckGo search engine.
*/

#ifndef DUCKDUCKGO_HPP
#define DUCKDUCKGO_HPP

#include "Website.hpp"
#include <string>

class DuckDuckGo : public Website
{
public:

    /*
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    DuckDuckGo(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif

