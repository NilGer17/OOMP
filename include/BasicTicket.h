/**
 * @file BasicTicket.h
 *
 * @brief This file contains the declaration of the BasicTicket class.
 */

#ifndef BasicTicket_h
#define BasicTicket_h

/**
 * @class BasicTicket
 *
 * @brief The BasicTicket class represents a basic ticket with place, price, and availability information.
 */
class BasicTicket
{
protected:
    std::string mPlace; /**< The place for which the ticket is valid. */
    uint mPrice; /**< The price of the ticket. */
    uint mAvailibeTicketsMax; /**< The maximum number of available tickets. */
    uint mAvailibeTickets; /**< The current number of available tickets. */

public:
    /**
     * @brief Constructor for the BasicTicket class.
     *
     * @param Place The place for which the ticket is valid.
     * @param Price The price of the ticket.
     * @param AvailableTickets The initial number of available tickets.
     * @param AvailibeTicketsMax The maximum number of available tickets.
     */
    BasicTicket(std::string Place, uint Price, uint AvailableTickets, uint AvailibeTicketsMax);

    /**
     * @brief Destructor for the BasicTicket class.
     */
    ~BasicTicket();

    /**
     * @brief Get the place for which the ticket is valid.
     *
     * @return The place.
     */
    std::string getPlace();

    /**
     * @brief Get the price of the ticket.
     *
     * @return The price.
     */
    uint getPrice();

    /**
     * @brief Get the current number of available tickets.
     *
     * @return The current number of available tickets.
     */
    uint getAvailabeTicketCount();

    /**
     * @brief Virtual method to print ticket details. Subclasses should override this method.
     */
    virtual void print();

    /**
     * @brief Virtual method to convert ticket details to a CSV string. Subclasses should override this method.
     *
     * @return A stringstream containing CSV data.
     */
    virtual std::stringstream T2CSV();

    /**
     * @brief Decrease the number of available tickets.
     *
     * @param minusTickets The number of tickets to decrease.
     */
    void decreaseTicketAmout(int minusTickets);
};

#endif
