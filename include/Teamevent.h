#include "BasicTicket.h"

#ifndef Teamevent_h
#define Teamevent_h
class Teamevent : public BasicTicket
{
private:
    std::string mTeamA;
    std::string mTeamB;
    std::string mSportType;
    std::string mDate;
    std::string mTime;

public:
    Teamevent(BasicTicket &BT, std::string TeamA, std::string TeamB, std::string SportsType, std::string mDate, std::string mTime);
    ~Teamevent();
    std::string getDate();
    std::string getTime();
    std::string getTeamA();
    std::string getTeamB();
    std::string getSportsType();
    void print();
    std::stringstream T2CSV();
};

#endif