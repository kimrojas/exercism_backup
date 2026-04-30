#include "leap.h"

namespace leap {

// TODO: add your solution here

bool div_by_4(int year){
    return year % 4 == 0;
}

bool div_by_100(int year){
    return year % 100 == 0; 
}

bool div_by_400(int year){
    return year % 400 == 0;
}

bool is_leap_year(int year){
    return div_by_4(year) && (! div_by_100(year) || div_by_400(year));
}


}  // namespace leap
