#include <string>
#include <iostream>
#include <sstream>

#ifndef BasicTicket_h
#define BasicTicket_h

class BasicTicket
{
protected:
    std::string mPlace;
    uint mPrice;
    uint mAvailibeTicketsMax;
    uint mAvailibeTickets;

public:
    BasicTicket(std::string Place, uint Price, uint AvailableTickets, uint AvailibeTicketsMax);
    ~BasicTicket();
    std::string getPlace();
    uint getPrice();
    uint getAvailabeTicketCount();
    virtual void print();
    virtual std::stringstream T2CSV();
    void decreaseTicketAmout(int minusTickets);
};

#endif