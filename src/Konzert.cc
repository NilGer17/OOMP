
#include "include/Konzert.h"

Konzert::Konzert(BasicTicket &BT, std::string Date, std::string Time, std::string Artist) : mDate(Date),
                                                                                            mTime(Time),
                                                                                            mArtist(Artist),
                                                                                            BasicTicket(BT)
{
}

Konzert::~Konzert() {}

std::string Konzert::getDate()
{
    return mDate;
}
std::string Konzert::getTime()
{
    return mTime;
}
std::string Konzert::getArtist()
{
    return mArtist;
}

void Konzert::print()
{
    std::cout << "Konzert\n";
    BasicTicket::print();
    std::cout << "Artist:\t\t\t" << mArtist << "\n";
    std::cout << "Date:\t\t\t" << mDate << "\n";
    std::cout << "Time:\t\t\t" << mTime << "\n";
}

std::stringstream Konzert::T2CSV()
{
    std::stringstream buffer;
    buffer << "Konzert," << BasicTicket::T2CSV().rdbuf() << mDate << "," << mTime << "," << mArtist << ",,,,,,\n";
    return buffer;
}