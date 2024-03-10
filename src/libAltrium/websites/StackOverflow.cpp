/*
* StackOverflow.cpp
*
* Implementation of the StackOverflow class
*/

#include "StackOverflow.hpp"

#include <iostream>
#include <algorithm>
#include <cstdlib>

/*
* Constructor
*
* @param[in] query string that contains the query
*/
StackOverflow::StackOverflow(const std::string query)
{
    url = query;
}

