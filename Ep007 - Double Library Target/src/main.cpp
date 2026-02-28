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
    // Use a C++20 feature to verify the compiler is using C++20 standard
    auto value = ((10 <=> 20) > 0);
    cout << boolalpha;
    cout << "value : " << value << endl;

    double result = add(10, 70);
    cout << "result : " << result << endl;

    Dog dog1("Flitzy");
    dog1.print_info();

    log_data("Hello there", LogType::FATAL_ERROR);

    return 0;
}