#include <iostream>
#include "include/BasicTicket.h"
#include "include/TicketManager.h"

int main(){
    std::cout << "Hello World, starting the Event Manager\n";
    TicketManager TM("../EventList.csv");
    try
    {
        TM.UserInput();
    }
    catch(const std::exception& e)
    {
        std::cerr <<  "\n\n\nSORRY, your input was wrong syntax\n";
        TM.Close();

    }
    
    //TM.ListAvailableEvents();
    //TM.Close();
}