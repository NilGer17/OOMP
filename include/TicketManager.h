#include "BasicTicket.h"
#include "Konzert.h"
#include "Festival.h"
#include "Teamevent.h"
#include "Sonstige.h"
#include <map>
#include <memory>

#include <fstream>

#ifndef TicketManager_h
#define TicketManager_h
class TicketManager
{
private:
    std::map<int, std::shared_ptr<BasicTicket>> Events;
    std::string mFilename;
    std::ofstream mOutputFile;
    std::ifstream mInput;

public:
    TicketManager(const std::string &filename);
    ~TicketManager();
    void UserInput();
    void ListAvailableEvents();
    void Close();
};

#endif