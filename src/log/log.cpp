#include "log.h"

#include <iostream>

void Logging::PrintFunc(std::string s, char const *file, int line){
    #ifdef __linux__
    std::cout<<"\033[1;37m[DEBUG] "<<s<<"\t\033[0m";
    std::cout<<"\033[0;37m(at "<<file<<":"<<line<<")\033[0m\n";
    #elif _WIN32 || _WIN64
    std::cout<<"[DEBUG] "<<s<<"\n";
    #endif
}

void Logging::PrintWarningFunc(std::string s, char const *file, int line){
    #ifdef __linux__
    std::cout<<"\033[1;33m[WARNING] "<<s<<"\t\033[0m";
    std::cout<<"\033[0;37m(at "<<file<<":"<<line<<")\033[0m\n";
    #elif _WIN32 || _WIN64
    std::cout<<"[WARNING] "<<s<<"\n";
    #endif
}

void Logging::PrintErrorFunc(std::string s, char const *file, int line){
    #ifdef __linux__
    std::cout << "\033[1;31m[ERROR] "<<s<<"\t\033[0m";
    std::cout<<"\033[0;37m(at "<<file<<":"<<line<<")\033[0m\n";
    #elif _WIN32 || _WIN64
    std::cout<<"[ERROR] "<<s<<"\n";
    #endif
}