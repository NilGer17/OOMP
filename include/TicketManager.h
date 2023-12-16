/**
 * @file TicketManager.h
 *
 * @brief This file contains the declaration of the TicketManager class, responsible for managing various types of event tickets.
 */

#ifndef TicketManager_h
#define TicketManager_h

#include "BasicTicket.h"
#include "Konzert.h"
#include "Festival.h"
#include "Teamevent.h"
#include "Sonstige.h"
#include <map>
#include <memory>
#include <fstream>

/**
 * @class TicketManager
 *
 * @brief The TicketManager class is responsible for managing various types of event tickets.
 */
class TicketManager
{
private:
    std::map<int, std::shared_ptr<BasicTicket>> Events; /**< A map to store event tickets with unique IDs. */
    std::string mFilename; /**< The filename to read and write ticket information to/from. */
    std::ofstream mOutputFile; /**< Output file stream to write ticket information. */
    std::ifstream mInput; /**< Input file stream to read ticket information. */

public:
    /**
     * @brief Constructor for the TicketManager class.
     *
     * @param filename The filename for storing ticket information.
     */
    TicketManager(const std::string &filename);

    /**
     * @brief Destructor for the TicketManager class.
     */
    ~TicketManager();

    /**
     * @brief Method to allow user input for managing tickets.
     */
    void UserInput();

    /**
     * @brief Method to list available events and their details.
     */
    void ListAvailableEvents();

    /**
     * @brief Method to close the output file.
     */
    void Close();
};

#endif
