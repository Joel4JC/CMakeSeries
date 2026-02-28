/*
    Source Code For This CMake Series:
    https://github.com/rutura/CMakeSeries
 */
#include <iostream>
#include "dog.h"
#include "operations.h"
#include "log.h"

using namespace std;

int main()
{
    double result = add(10, 70);
    cout << "result : " << result << endl;

    Dog dog1("Flitzy");
    dog1.print_info();

    log_data("Hello there", LogType::FATAL_ERROR);

    return 0;
}