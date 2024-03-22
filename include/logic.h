#ifndef LOGIC_H
#define LOGIC_H
    #include "../external/Unity/src/unity.h"

    /**
    * @brief Add tho numbers
    *      
    * @param first_number First number
    * @param second_number Second number
    * @return first_number + second_number
    */
    int add(int first_number, int second_number);

    /**
    * @brief Substract two numbers
    *      
    * @param first_number First number
    * @param second_number Second number
    * @return first_number - second_number
    */
    int substract(int first_number, int second_number);

    /**
    * @brief Multiply tho numbers
    *      
    * @param first_number First number
    * @param second_number Second number
    * @return first_number * second_number
    */
    int multiply(int first_number, int second_number);

    /**
    * @brief Divide tho numbers
    *      
    * @param first_number First number
    * @param second_number Second number
    * @return first_number / second_number
    */
    double divide(int first_number, int second_number);
#endif
