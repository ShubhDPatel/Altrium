/*
* StackOverflow.hpp
*
* Header file for Pdf class
*/

#ifndef PDF_HPP
#define PDF_HPP


#include "Website.hpp"
#include <string>

class Pdf : public Website
{
public:

    /*
    * Constructor
    *
    * @param[in] query string that contains the query
    */
    Pdf(const std::string query);

    /*
    * Builds the query string for the website.
    */
    void buildQuery() override;
};

#endif
