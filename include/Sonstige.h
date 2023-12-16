/**
 * @file Sonstiges.h
 *
 * @brief This file contains the declaration of the Sonstiges class, which is derived from BasicTicket.
 */

#ifndef Sonstige_h
#define Sonstige_h

/**
 * @class Sonstiges
 *
 * @brief The Sonstiges class represents a miscellaneous ticket with additional description, date, and time information.
 */
class Sonstiges : public BasicTicket
{
private:
    std::string mDiscription; /**< The description of the miscellaneous event or ticket. */
    std::string mDate; /**< The date of the miscellaneous event. */
    std::string mTime; /**< The time of the miscellaneous event. */

public:
    /**
     * @brief Constructor for the Sonstiges class.
     *
     * @param BT The BasicTicket object to inherit properties from.
     * @param Description The description of the miscellaneous event or ticket.
     * @param Date The date of the miscellaneous event.
     * @param Time The time of the miscellaneous event.
     */
    Sonstiges(BasicTicket &BT, std::string Description, std::string Date, std::string Time);

    /**
     * @brief Destructor for the Sonstiges class.
     */
    ~Sonstiges();

    /**
     * @brief Get the date of the miscellaneous event.
     *
     * @return The event date.
     */
    std::string getDate();

    /**
     * @brief Get the time of the miscellaneous event.
     *
     * @return The event time.
     */
    std::string getTime();

    /**
     * @brief Get the description of the miscellaneous event or ticket.
     *
     * @return The event description.
     */
    std::string getDiscription();

    /**
     * @brief Print miscellaneous ticket details.
     */
    void print();

    /**
     * @brief Convert miscellaneous ticket details to a CSV string.
     *
     * @return A stringstream containing CSV data.
     */
    std::stringstream T2CSV();
};

#endif
