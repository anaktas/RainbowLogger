#include "log.h"

int
main(int argc, char *argv[])
{
    dbg("I am a debug log!");
    inf("I am an info log!");
    warn("I am a warning log!");
    err("I am an error log!");

    inf("Variable argument list example :-> String: %s, Number: %d", "I am a string", 42);

    return 0;
}