#include "BasicTicket.h"

#ifndef Festival_h
#define Festival_h

class Festival : public BasicTicket
{
private:
    std::string mStartDate;
    std::string mEndDate;
    std::string mFestivalName;

public:
    Festival(BasicTicket &BT, std::string StartDate, std::string EndDate, std::string FestivalName);
    ~Festival();
    std::string getStartDate();
    std::string getEndDate();
    std::string getFestivalName();
    void print();
    std::stringstream T2CSV();
};

#endif