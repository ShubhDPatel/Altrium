/*
* Google.hpp
*
* Include file for the Google search engine.
*/

#ifndef GOOGLE_HPP
#define GOOGLE_HPP

#include "Website.hpp"

class Google : public Website
{
public:
    /*
    * Builds the query string for the Google search engine.
    */
    void buildQuery() override;
};

#endif

