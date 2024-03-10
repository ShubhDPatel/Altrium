#ifndef ALTRIUM_HPP
#define ALTRIUM_HPP

#include <string>
#include <memory>

class Altrium
{
private:

    int argc;
    std::unique_ptr<std::string[]> argv;

public:

    /*
    * Constructor
    *
    * @param[in] argc number of command line arguments
    * @param[in] argv array of command line arguments
    */
    Altrium(int argc, char* argv[]);

    /*
    * Entry point for the altrium application.
    */
    void parse();

};

#endif

