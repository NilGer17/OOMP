
#include "include/Teamevent.h"

Teamevent::Teamevent(BasicTicket &BT, std::string TeamA, std::string TeamB, std::string SportsType, std::string Date, std::string Time) : BasicTicket(BT),
                                                                                                                                          mTeamA(TeamA),
                                                                                                                                          mTeamB(TeamB),
                                                                                                                                          mSportType(SportsType),
                                                                                                                                          mDate(Date),
                                                                                                                                          mTime(Time)
{
}

Teamevent::~Teamevent()
{
}

std::string Teamevent::getTeamA()
{
    return mTeamA;
}

std::string Teamevent::getTeamB()
{
    return mTeamB;
}

std::string Teamevent::getSportsType()
{
    return mSportType;
}

std::string Teamevent::getDate()
{
    return mDate;
}
std::string Teamevent::getTime()
{
    return mTime;
}

void Teamevent::print()
{
    std::cout << "TeamEvent\n";
    BasicTicket::print();
    std::cout << "SportsTye:\t\t" << mSportType << "\n";
    std::cout << "Team A:\t\t\t" << mTeamA << "\n";
    std::cout << "Team B:\t\t\t" << mTeamB << "\n";
    std::cout << "Date:\t\t\t" << mDate << "\n";
    std::cout << "Tie:\t\t\t" << mTime << "\n";
}

std::stringstream Teamevent::T2CSV()
{
    std::stringstream buffer;
    buffer << "Teamevent," << BasicTicket::T2CSV().rdbuf() << mDate << "," << mTime << ",,,,," << mTeamA << "," << mTeamB << "," << mSportType << ",\n";
    return buffer;
}