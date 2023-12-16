/**
 * @file Konzert.h
 *
 * @brief This file contains the declaration of the Konzert class, which is derived from BasicTicket.
 */

#ifndef Konzert_h
#define Konzert_h

/**
 * @class Konzert
 *
 * @brief The Konzert class represents a concert ticket with additional date, time, and artist information.
 */
class Konzert : public BasicTicket
{
private:
    std::string mDate; /**< The date of the concert. */
    std::string mTime; /**< The time of the concert. */
    std::string mArtist; /**< The name of the artist or band performing at the concert. */

public:
    /**
     * @brief Constructor for the Konzert class.
     *
     * @param BT The BasicTicket object to inherit properties from.
     * @param Date The date of the concert.
     * @param Time The time of the concert.
     * @param Artist The name of the artist or band performing at the concert.
     */
    Konzert(BasicTicket &BT, std::string Date, std::string Time, std::string Artist);

    /**
     * @brief Destructor for the Konzert class.
     */
    ~Konzert();

    /**
     * @brief Get the date of the concert.
     *
     * @return The concert date.
     */
    std::string getDate();

    /**
     * @brief Get the time of the concert.
     *
     * @return The concert time.
     */
    std::string getTime();

    /**
     * @brief Get the name of the artist or band performing at the concert.
     *
     * @return The artist's name.
     */
    std::string getArtist();

    /**
     * @brief Print concert ticket details.
     */
    void print();

    /**
     * @brief Convert concert ticket details to a CSV string.
     *
     * @return A stringstream containing CSV data.
     */
    std::stringstream T2CSV();
};

#endif
