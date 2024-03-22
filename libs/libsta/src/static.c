#include "static.h"

int static_lib_function(char* msg){
    printf("Hi! I'm an static lib that receives '%s'", msg );
    return strlen(msg);
}