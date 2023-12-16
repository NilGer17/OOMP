#include "include/BasicTicket.h"
#include <iostream>
#include <string>
#include <sstream>

BasicTicket::BasicTicket(std::string Place, uint Price, uint AvailableTickets, uint AvailibeTicketsMax) : mPlace(Place),
                                                                                                          mPrice(Price),
                                                                                                          mAvailibeTickets(AvailableTickets),
                                                                                                          mAvailibeTicketsMax(AvailibeTicketsMax)
{
   // std::cout << "Konstruktor Basic Class\n";
    if (mAvailibeTickets <= 0.1 * mAvailibeTicketsMax)
    {
        mPrice = mPrice * 2;
    }
}

BasicTicket::~BasicTicket() {}

uint BasicTicket::getAvailabeTicketCount()
{
    return mAvailibeTickets;
}
uint BasicTicket::getPrice()
{
    return mPrice;
}
std::string BasicTicket::getPlace()
{
    return mPlace;
}

void BasicTicket::print()
{
    std::cout << "Place:\t\t\t" << mPlace << "\n";
    std::cout << "Price:\t\t\t" << mPrice << "\n";
    std::cout << "Available Tickets:\t" << mAvailibeTickets << "\n";
}

std::stringstream BasicTicket::T2CSV()
{
    std::stringstream buffer;
    buffer << mPlace << "," << mPrice << "," << mAvailibeTickets << "," << mAvailibeTicketsMax << ",";
    return buffer;
}

void BasicTicket::decreaseTicketAmout(int MinusTickets)
{
    if (MinusTickets > mAvailibeTickets)
    {
        std::cout << "There are not enougth tickets!\nWe're sorry\n";
    }
    else
    {
        mAvailibeTickets -= MinusTickets;
    }
}
