#include <stdio.h>

int westeros_service_start( int argc, char** argv);

int main( int argc, char** argv)
{
    printf("---> %s: Entering\n", __FUNCTION__);
    return (westeros_service_start(argc, argv));
}
