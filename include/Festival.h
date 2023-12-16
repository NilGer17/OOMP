/**
 * @file Festival.h
 *
 * @brief This file contains the declaration of the Festival class, which is derived from BasicTicket.
 */

#ifndef Festival_h
#define Festival_h

/**
 * @class Festival
 *
 * @brief The Festival class represents a festival ticket with additional start date, end date, and festival name information.
 */
class Festival : public BasicTicket
{
private:
    std::string mStartDate; /**< The start date of the festival. */
    std::string mEndDate; /**< The end date of the festival. */
    std::string mFestivalName; /**< The name of the festival. */

public:
    /**
     * @brief Constructor for the Festival class.
     *
     * @param BT The BasicTicket object to inherit properties from.
     * @param StartDate The start date of the festival.
     * @param EndDate The end date of the festival.
     * @param FestivalName The name of the festival.
     */
    Festival(BasicTicket &BT, std::string StartDate, std::string EndDate, std::string FestivalName);

    /**
     * @brief Destructor for the Festival class.
     */
    ~Festival();

    /**
     * @brief Get the start date of the festival.
     *
     * @return The start date.
     */
    std::string getStartDate();

    /**
     * @brief Get the end date of the festival.
     *
     * @return The end date.
     */
    std::string getEndDate();

    /**
     * @brief Get the name of the festival.
     *
     * @return The festival name.
     */
    std::string getFestivalName();

    /**
     * @brief Print festival ticket details.
     */
    void print();

    /**
     * @brief Convert festival ticket details to a CSV string.
     *
     * @return A stringstream containing CSV data.
     */
    std::stringstream T2CSV();
};

#endif
