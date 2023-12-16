/**
 * @file main.cpp
 *
 * @brief This file contains the main function that initializes the Event Manager.
 */

#include <iostream>
#include "include/BasicTicket.h"
#include "include/TicketManager.h"

/**
 * @brief The main function to start the Event Manager application.
 *
 * It creates a TicketManager object, takes user input to manage event tickets, and handles exceptions.
 */
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
    
    // TM.ListAvailableEvents();
    // TM.Close();
}
