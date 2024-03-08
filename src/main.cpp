/*
 * altrium.cpp
 *
 * Main entry point for the altrium application.
 * Launches a website with user specified options.
 * Such options include: a website name, query strings, and others.
 */

#include "libAltrium/Altrium.hpp"

int main(int argc, char* argv[])
{
    Altrium handler;
    handler.parse(argc, argv);

    return 0;
}

