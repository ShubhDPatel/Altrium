/*
* Google.hpp
*
* Include file for the Youtube class.
*/

#ifndef YOUTUBE_HPP
#define YOUTUBE_HPP

#include "Website.hpp"
#include <string>

class Youtube : public Website
{
public:

    /*
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    Youtube(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif

