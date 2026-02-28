#include <iostream>
#include "log.h"

using namespace std;

void log_data(const char *message, LogType lt)
{
    switch (lt)
    {
    case LogType::MESSAGE:
        cout << "Message : " << message << endl;
        break;
    case LogType::WARNING:
        cout << "Warning : " << message << endl;
        break;
    case LogType::FATAL_ERROR:
        cout << "Fatal Error : " << message << endl;
        break;

    default:
        break;
    }
}