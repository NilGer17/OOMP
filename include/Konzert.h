#include "BasicTicket.h"

#ifndef Konzert_h
#define Konzert_h

class Konzert : public BasicTicket
{
private:
    std::string mDate;
    std::string mTime;
    std::string mArtist;

public:
    Konzert(BasicTicket &BT, std::string Date, std::string Time, std::string Artist);
    ~Konzert();
    std::string getDate();
    std::string getTime();
    std::string getArtist();
    void print();
    std::stringstream T2CSV();
};

#endif