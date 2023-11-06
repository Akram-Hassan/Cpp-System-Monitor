#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
    long hours = seconds / 3600;
    long seconds_after_hours = seconds % 3600;

    long minutes = seconds_after_hours / 60;
    long seconds_result = seconds_after_hours % 60;

    char result[8];
    sprintf(result, "%02d:%02d:%02d", hours, minutes, seconds_result);

    return string(result); 
}