/*
 * Website.hpp
 *
 * Include file for the Website interface.
 */

#ifndef WEBSITE_HPP
#define WEBSITE_HPP

#include <string>

class Website
{
protected:
    std::string url;

public:
    /*
    * Builds the query string for the website.
    */
    void buildQuery();

    /*
    * Default constructor.
    */
    Website(char* inputUrl);
};

#endif

