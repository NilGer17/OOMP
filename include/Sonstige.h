#include "BasicTicket.h"
#ifndef Sonstige_h
#define Sonstige_h
class Sonstiges : public BasicTicket
{
private:
    std::string mDiscription;
    std::string mDate;
    std::string mTime;

public:
    Sonstiges(BasicTicket &BT, std::string Discription, std::string Date, std::string Time);
    ~Sonstiges();
    std::string getDate();
    std::string getTime();
    std::string getDiscription();
    void print();
    std::stringstream T2CSV();
};
#endif