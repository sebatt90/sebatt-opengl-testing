#pragma once
#include <string>

namespace Logging {
    void PrintFunc(std::string s, char const *file, int line);
    void PrintWarningFunc(std::string s, char const *file, int line);
    void PrintErrorFunc(std::string s, char const *file, int line);

    #define Print(x) PrintFunc(x, __FILE__, __LINE__)
    #define PrintWarn(x) PrintWarningFunc(x, __FILE__, __LINE__)
    #define PrintErr(x) PrintErrorFunc(x, __FILE__, __LINE__)
}