#include "include/Sonstige.h"

Sonstiges::Sonstiges(BasicTicket &BT, std::string Discription, std::string Date, std::string Time) : BasicTicket(BT),
                                                                                                     mDiscription(Discription),
                                                                                                     mDate(Date),
                                                                                                     mTime(Time)
{
}

Sonstiges::~Sonstiges()
{
}

std::string Sonstiges::getDiscription()
{
    return mDiscription;
}

std::string Sonstiges::getDate()
{
    return mDate;
}
std::string Sonstiges::getTime()
{
    return mTime;
}

void Sonstiges::print()
{
    std::cout << "Sonstiges\n";
    BasicTicket::print();
    std::cout << "Date:\t\t\t" << mDate << "\n";
    std::cout << "Time:\t\t\t" << mTime << "\n";
    std::cout << "Discription\n"
              << mDiscription << "\n";
}

std::stringstream Sonstiges::T2CSV()
{
    std::stringstream buffer;
    buffer << "Sonstiges," << BasicTicket::T2CSV().rdbuf() << mDate << "," << mTime << ","
           << ",,,,,,," << mDiscription << "\n";
    return buffer;
}