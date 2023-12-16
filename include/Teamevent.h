/**
 * @file Teamevent.h
 *
 * @brief This file contains the declaration of the Teamevent class, which is derived from BasicTicket.
 */

#ifndef Teamevent_h
#define Teamevent_h

/**
 * @class Teamevent
 *
 * @brief The Teamevent class represents a team sports event ticket with information about the teams, sports type, date, and time.
 */
class Teamevent : public BasicTicket
{
private:
    std::string mTeamA; /**< The name of the first team. */
    std::string mTeamB; /**< The name of the second team. */
    std::string mSportType; /**< The type of sports event. */
    std::string mDate; /**< The date of the teamevent. */
    std::string mTime; /**< The time of the teamevent. */

public:
    /**
     * @brief Constructor for the Teamevent class.
     *
     * @param BT The BasicTicket object to inherit properties from.
     * @param TeamA The name of the first team.
     * @param TeamB The name of the second team.
     * @param SportsType The type of sports event.
     * @param Date The date of the teamevent.
     * @param Time The time of the teamevent.
     */
    Teamevent(BasicTicket &BT, std::string TeamA, std::string TeamB, std::string SportsType, std::string Date, std::string Time);

    /**
     * @brief Destructor for the Teamevent class.
     */
    ~Teamevent();

    /**
     * @brief Get the date of the teamevent.
     *
     * @return The teamevent date.
     */
    std::string getDate();

    /**
     * @brief Get the time of the teamevent.
     *
     * @return The teamevent time.
     */
    std::string getTime();

    /**
     * @brief Get the name of the first team.
     *
     * @return The name of the first team.
     */
    std::string getTeamA();

    /**
     * @brief Get the name of the second team.
     *
     * @return The name of the second team.
     */
    std::string getTeamB();

    /**
     * @brief Get the type of sports event.
     *
     * @return The sports event type.
     */
    std::string getSportsType();

    /**
     * @brief Print teamevent ticket details.
     */
    void print();

    /**
     * @brief Convert teamevent ticket details to a CSV string.
     *
     * @return A stringstream containing CSV data.
     */
    std::stringstream T2CSV();
};

#endif
