#include "include/Festival.h"

Festival::Festival(BasicTicket &BT, std::string StartDate, std::string EndDate, std::string FestivalName) : BasicTicket(BT),
                                                                                                            mStartDate(StartDate),
                                                                                                            mEndDate(EndDate),
                                                                                                            mFestivalName(FestivalName)
{
}

Festival::~Festival()
{
}

std::string Festival::getStartDate()
{
    return mStartDate;
}

std::string Festival::getEndDate()
{
    return mEndDate;
}

std::string Festival::getFestivalName()
{
    return mFestivalName;
}
void Festival::print()
{
    std::cout << "Festival\n";
    BasicTicket::print();
    std::cout << "Festival Name:\t\t" << mFestivalName << "\n";
    std::cout << "Beginning:\t\t" << mStartDate << "\n";
    std::cout << "Ending:\t\t\t" << mEndDate << "\n";
}

std::stringstream Festival::T2CSV()
{

    std::stringstream buffer;
    buffer << "Festival," << BasicTicket::T2CSV().rdbuf() << ",,," << mStartDate << "," << mEndDate << "," << mFestivalName << ",,,,\n";
    return buffer;
}
