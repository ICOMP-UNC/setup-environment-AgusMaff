#include <greetings.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    printf("Hello, OS II. Welcome to 2024 course!\n");
    greetings();
    printf("\nCalling shared lib from main program. I get '%d'\n", shared_lib_function("Hello OS II"));
    printf("\nCalling static lib from main program. I get '%d'\n", static_lib_function("Bye OS II"));
    return 0;
}