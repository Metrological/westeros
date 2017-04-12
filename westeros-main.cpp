#include <stdio.h>

int westeros_service_start( int argc, char** argv, void (*fn_callback)(bool));

int main( int argc, char** argv)
{
    return (westeros_service_start(argc, argv, NULL));
}
