#include "include/TicketManager.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
// Konstruktor ließt CSV Datei Direkt ein
TicketManager::TicketManager(const std::string &filename) : mFilename(filename)
{
    int id = 1;
    mInput.open(mFilename);
    std::string line = "";
    if (mInput.is_open())
    {
        std::cout << mFilename << " is open!" << std::endl;
        std::getline(mInput, line); // Headline
        line = "";
        while (std::getline(mInput, line))
        {
            std::string typ = "";
            std::string Place;
            std::string Price = "0";
            std::string TicketCount = "0";
            std::string TicketCountMAX = "0";
            std::string Date = "0";
            std::string Time = "0";
            std::string Artist = "0";
            std::string StartDate;
            std::string EndDate;
            std::string FestivalName = "0";
            std::string TeamA = "0";
            std::string TeamB = "0";
            std::string SportsType = "0";
            std::string Discription;

            std::stringstream inPutLine(line);
            // std::cout << line;
            std::getline(inPutLine, typ, ',');
            std::getline(inPutLine, Place, ',');
            std::getline(inPutLine, Price, ',');
            std::getline(inPutLine, TicketCount, ',');
            std::getline(inPutLine, TicketCountMAX, ',');
            std::getline(inPutLine, Date, ',');
            std::getline(inPutLine, Time, ',');

            std::getline(inPutLine, Artist, ',');
            std::getline(inPutLine, StartDate, ',');
            std::getline(inPutLine, EndDate, ',');
            std::getline(inPutLine, FestivalName, ',');
            std::getline(inPutLine, TeamA, ',');
            std::getline(inPutLine, TeamB, ',');
            std::getline(inPutLine, SportsType, ',');
            std::getline(inPutLine, Discription, '\n');
            //\n erlaubt auch , in der Beschreibung...da beschreibung am ende Steht
            BasicTicket BT(Place, stoi(Price), stoi(TicketCount), stoi(TicketCountMAX));
            if (typ == "Konzert")
            {
                auto K = std::make_shared<Konzert>(BT, Date, Time, Artist);
                Events.emplace(id, K);
            }
            if (typ == "Festival")
            {
                // std::cout << "ICH bIN FESTIVAL\n\n";
                auto F = std::make_shared<Festival>(BT, StartDate, EndDate, FestivalName);
                Events.emplace(id, F);
            }
            if (typ == "Teamevent")
            {
                auto T = std::make_shared<Teamevent>(BT, TeamA, TeamB, SportsType, Date, Time);
                Events.emplace(id, T);
            }
            if (typ == "Sonstiges")
            {
                auto S = std::make_shared<Sonstiges>(BT, Discription, Date, Time);
                Events.emplace(id, S);
            }
            line = "";
            id++;
        }
    }
}

TicketManager::~TicketManager()
{
}

void TicketManager::UserInput()
{
    ListAvailableEvents();
    std::cout << "From which Event do you wanna buy a ticket?" << std::endl;
    std::string eventinput, quantityinput;
    std::cin >> eventinput;
    std::cout << "How much do you want do buy?" << std::endl;
    std::cin >> quantityinput;
    std::cout << "You choosed this event:";
    Events.find(stoi(eventinput))->second.get()->print();
    std::cout << "\nDo you want to buy " << quantityinput << " Tickets for " << (Events.find(stoi(eventinput))->second.get()->getPrice()) * stoi(quantityinput) << " EUR?\n[y/n]";
    char q;
    std::cin >> q;
    if (q == 'y')
    {
        Events.find(stoi(eventinput))->second.get()->decreaseTicketAmout(stoi(quantityinput));
        Close();
    }
    else
    {
        std::cout << "Do you want to buy something other?\n[y/n]";
        char x;
        std::cin >> x;
        if (x == 'y')
        {
            UserInput();
        }
        else
        {
            Close();
        }
    }
}

void TicketManager::ListAvailableEvents()
{
    for (auto j : Events)
    {
        std::cout << j.first << std::endl;
        j.second->print();
        std::cout << std::endl;
    }
}

void TicketManager::Close()
{
    std::cout << "Write all Events into" << mFilename << std::endl;
    mOutputFile.open(mFilename);
    mOutputFile << "Typ,Place,Price,TicketCount,Date,Time,Artist,StartDate,EndDate,FestivalName,TeamA,TeamB,Sportstype,Discirption\n";
    for (auto j : Events)
    {
        mOutputFile << j.second->T2CSV().rdbuf();
    }
    mOutputFile.close();
    std::cout << "Danke und Aufwiedersehen" << std::endl;
    exit(1);
}