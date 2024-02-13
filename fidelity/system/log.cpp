#include "log.h"
#include <windows.h>
#include <stdio.h>

#define DARK_GRAY "\033[1;30m"
#define RESET "\033[0m"
#define RED "\033[1;31m"


void fidelity::DebugTools::Log(LogLevel level, const char* format, ...)
{
    va_list args;
    va_start(args, format);

    switch (level) {
    case LogLevel::INFO:
        printf("%s[", DARK_GRAY);
        printf("%sinfo", RESET);
        printf("%s]%s ", DARK_GRAY, RESET);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        break;
    case LogLevel::WARNING:
        printf("%s[", DARK_GRAY);
        printf("%swarning", RESET);
        printf("%s]%s ", DARK_GRAY, RESET);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        break;
    case LogLevel::_ERROR:
        printf("%s[", DARK_GRAY);
        printf("%serror", RED);
        printf("%s]%s ", DARK_GRAY, RESET);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        break;
    }

    vprintf(format, args); 
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

    va_end(args);
}