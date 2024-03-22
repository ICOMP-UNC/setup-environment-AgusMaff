#include "shared.h"

int shared_lib_function(char* msg){
    printf("Hi! I'm an dynamic lib that receives '%s'", msg );
    return strlen(msg);
}