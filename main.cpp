#include <bits/stdc++.h>
using namespace std;

// This class represents a user of the system.
class User {
    string name;
    string email;
    string password;


public:
    // Constructor initializes a new User object with name, email, and password.
    User(string name, string email, string password) {
        this->name = name;
        this->email = email;
        this->password = password;
    }

    // Getters provide access to the private members.
    string getName() {
        return name;
    }

    string getEmail() {
        return email;
    }

    string getPassword() {
        return password;
    }

};
// This struct represents a destination, with information like name, country, and description.
struct Destination {
    string name;
    string country;
    string description;
};

// This struct represents an activity, with information like name, country, and description.
struct Activity {
    string name;
    string country;
    string description;

};

// This struct represents a service, with information like name, country, and description.
struct Service {
    string name;
    string country;
    string description;
};

// This struct represents an instruction, with information like description and country.
struct Instruction {
    string description;
    string country;
};

// This struct represents a comment, with information like text and country.
struct Comment {
    string text;
    string country;
};

// This struct represents a song, with information like title, artist, and country.
struct Song {
    string title;
    string artist;
    string country;
};

// This struct represents a soccer team, with information like name and country.
struct SoccerTeam {
    string name;
    string country;
};

// This class provides search functionality for different categories of data.
class Search {
public:
    // This method searches for destinations based on a query string.
    vector<Destination> Destinations(string query) {
        // Initialize a vector of destinations with pre-defined data.
        vector<Destination> destinations = {
            {"Cairo", "Egypt", "The capital of Egypt, known for the nearby Giza pyramids and the Egyptian Museum."},
            {"Luxor", "Egypt", "Famous for its ancient Egyptian temples and the Valley of the Kings."},
            {"Baghdad", "Iraq", "The capital of Iraq, known for its rich history and cultural heritage."},
            {"Mosul", "Iraq", "An ancient city in northern Iraq with historical landmarks and archaeological sites."},
            {"Berlin", "Germany", "The capital of Germany, known for its art scene and modern landmarks."},
            {"Munich", "Germany", "Famous for its annual Oktoberfest beer festival and its central Marienplatz square."},
            {"Paris", "France", "The capital of France, known for its art, fashion, and landmarks like the Eiffel Tower."},
            {"Nice", "France", "Located on the French Riviera, known for its beautiful beaches and promenade."}
        };
        // Initialize a vector to store search results.
        vector<Destination> results;
        // Iterate through the destinations and check if the query string is present in the country.
        for (const auto& dest : destinations) {
            if (dest.country.find(query) != string::npos) {
                results.push_back(dest);
            }
        }
        // Return the search results.
        return results;
    }

    // This method searches for activities based on a query string.
    vector<Activity> Activities(string query) {
        // Initialize a vector of activities with pre-defined data.
        vector<Activity> activities = {
            {"Hiking", "Germany", "Explore trails in the Black Forest and enjoy scenic views."},
            {"Sightseeing", "France", "Visit popular landmarks like the Eiffel Tower and Louvre Museum."},
            {"Snorkeling", "Egypt", "Discover underwater life in the Red Sea."},
            {"Safari", "Iraq", "Experience wildlife and nature on a guided tour in the Mesopotamian marshes."},
            {"Cycling Tour", "Germany", "Explore Berlin and its surroundings on a guided cycling tour."},
            {"Wine Tasting", "France", "Sample and learn about different wines in Bordeaux."},
            {"Hot Air Balloon Ride", "Egypt", "Enjoy panoramic views of Luxor from a hot air balloon."},
            {"Cultural Walking Tour", "Iraq", "Discover Baghdad's history, architecture, and hidden gems on foot."}
        };
        // Initialize a vector to store search results.
        vector<Activity> results;
        // Iterate through the activities and check if the query string is present in the country.
        for (const auto& activity : activities) {
            if (activity.country.find(query) != string::npos) {
                // If the query is found, add the activity to the results.
                results.push_back(activity);
            }
        }
        // Return the search results.
        return results;
    }

    // This method searches for services based on a query string.
    vector<Service> Services(string query) {
        // Initialize a vector of services with pre-defined data.
        vector<Service> services = {
            {"Hotel accommodation", "Egypt", "Comfortable stays with all amenities."},
            {"Restaurant reservation", "France", "Book tables at top-rated restaurants."},
            {"Guided tours", "Germany", "Explore cities with knowledgeable guides."},
            {"Car rental", "Iraq", "Rent a vehicle to explore on your own."},
            {"Spa services", "France", "Relax with massages and wellness treatments."},
            {"Event tickets", "Germany", "Get tickets for local events and shows."},
            {"Airport transfers", "Egypt", "Convenient rides to and from the airport."},
            {"Translation services", "Iraq", "Help with language barriers."}
        };
        // Initialize a vector to store search results.
        vector<Service> results;
        // Iterate through the services and check if the query string is present in the country.
        for (const auto& service : services) {
            if (service.country.find(query) != string::npos) {
                // If the query is found, add the service to the results.
                results.push_back(service);
            }
        }
        // Return the search results.
        return results;
    }

    // This method searches for instructions based on a query string.
    vector<Instruction> Instructions(string query) {
        // Initialize a vector of instructions with pre-defined data.
        vector<Instruction> instructions = {
            {"Always carry water when visiting the pyramids.", "Egypt"},
            {"Respect local customs and dress modestly.", "Iraq"},
            {"Use public transportation to explore the city.", "Germany"},
            {"Try to learn basic French phrases.", "France"}
        };

        // Initialize a vector to store search results.
        vector<Instruction> results;
        // Iterate through the instructions and check if the query string is present in the country.
        for (const auto& instruction : instructions) {
            if (instruction.country.find(query) != string::npos) {
                // If the query is found, add the instruction to the results.
                results.push_back(instruction);
            }
        }
        // Return the search results.
        return results;
    }

    // This method searches for comments based on a query string.
    vector<Comment> Comments(string query) {
        // Initialize a vector of comments with pre-defined data.
        vector<Comment> comments = {
            {"The view from the Eiffel Tower is breathtaking!", "France"},
            {"The Egyptian Museum is a must-visit.", "Egypt"},
            {"I loved the Oktoberfest in Munich!", "Germany"},
            {"The historical sites in Baghdad are fascinating.", "Iraq"}
        };

        // Initialize a vector to store search results.
        vector<Comment> results;
        // Iterate through the comments and check if the query string is present in the country.
        for (const auto& comment : comments) {
            if (comment.country.find(query) != string::npos) {
                // If the query is found, add the comment to the results.
                results.push_back(comment);
            }
        }
        // Return the search results.
        return results;
    }

    // This method searches for songs based on a query string.
    vector<Song> Songs(string query) {
        // Initialize a vector of songs with pre-defined data.
        vector<Song> songs = {
            {"La Vie en Rose", "Édith Piaf", "France"},
            {"Aïcha", "Khaled", "France"},
            {"Tab Wana Maly", "Warda El Gazaerya", "Egypt"},
            {"Ya Salam Ala Baghdad", "Kazem Al Saher", "Iraq"},
            {"99 Luftballons", "Nena", "Germany"},
            {"Du Hast", "Rammstein", "Germany"},
            {"Habibi Ya Nour El Ain", "Amr Diab", "Egypt"},
            {"Baghdad", "Ilham al-Madfai", "Iraq"}
        };

        vector<Song> results;
        for (const auto& song : songs) {
            if (song.country.find(query) != string::npos) {
                results.push_back(song);
            }
        }
        return results;
    }

    vector<SoccerTeam> SoccerTeams(string query) {
        vector<SoccerTeam> soccerTeams = {
            {"Al Ahly SC", "Egypt"},
            {"Zamalek SC", "Egypt"},
            {"Al Shorta SC", "Iraq"},
            {"Al Quwa Al Jawiya", "Iraq"},
            {"Bayern Munich", "Germany"},
            {"Borussia Dortmund", "Germany"},
            {"Paris Saint-Germain", "France"},
            {"Olympique Lyonnais", "France"}
        };

        vector<SoccerTeam> results;
        for (const auto& team : soccerTeams) {
            if (team.country.find(query) != string::npos) {
                results.push_back(team);
            }
        }
        return results;
    }

private:
    vector<Destination> destinations;
    vector<Activity> activities;
    vector<Service> services;
    vector<Instruction> instructions;
    vector<Comment> comments;
    vector<Song> songs;
    vector<SoccerTeam> soccerTeams;

};


// Class to manage currency conversion
class CurrencyConverter {
private:
    // Vector to store supported currencies
    std::vector<std::string> currencies;
    // Default currency
    std::string defaultCurrency;
    // 2D array to store conversion rates between currencies
    double conversionRates[5][5];

    // Helper function to find the index of a currency in the currencies vector
    int getCurrencyIndex(const std::string& currency) const {
        for (size_t i = 0; i < currencies.size(); ++i) {
            if (currencies[i] == currency) {
                return i;
            }
        }
        return -1;
    }

public:
    // Constructor to initialize the CurrencyConverter object
    CurrencyConverter(const std::vector<std::string>& currencies, const std::string& defaultCurrency)
            : currencies(currencies), defaultCurrency(defaultCurrency) {
        // Initialize conversion rates to 1 for same currency and 0 for others
        for (size_t i = 0; i < currencies.size(); ++i) {
            for (size_t j = 0; j < currencies.size(); ++j) {
                if (i == j) {
                    conversionRates[i][j] = 1.0;
                }
                else {
                    conversionRates[i][j] = 0.0;
                }
            }
        }
    }

    // Get the list of supported currencies
    std::vector<std::string> getCurrencies() const {
        return currencies;
    }

    // Get the default currency
    std::string getDefaultCurrency() const {
        return defaultCurrency;
    }

    // Set the default currency
    void setDefaultCurrency(const std::string& currency) {
        defaultCurrency = currency;
    }

    // Add a conversion rate between two currencies
    void addConversionRate(const std::string& fromCurrency, const std::string& toCurrency, double rate) {
        int fromIndex = getCurrencyIndex(fromCurrency);
        int toIndex = getCurrencyIndex(toCurrency);

        // Check if currencies are valid
        if (fromIndex == -1 || toIndex == -1) {
            std::cerr << "Error: Currency not found." << std::endl;
            std::exit(EXIT_FAILURE);
        }

        conversionRates[fromIndex][toIndex] = rate;
    }

    // Convert an amount from one currency to another
    double convert(const std::string& fromCurrency, const std::string& toCurrency, double amount) const {
        int fromIndex = getCurrencyIndex(fromCurrency);
        int toIndex = getCurrencyIndex(toCurrency);

        // Check if currencies are valid and conversion rate exists
        if (fromIndex == -1 || toIndex == -1) {
            std::cerr << "Error: Currency not found." << std::endl;
            std::exit(EXIT_FAILURE);
        }

        if (conversionRates[fromIndex][toIndex] == 0.0) {
            std::cerr << "Error: Conversion rate not found." << std::endl;
            std::exit(EXIT_FAILURE);
        }

        double conversionRate = conversionRates[fromIndex][toIndex];
        return amount * conversionRate;
    }

    // Print the list of available currencies
    void printCurrencies() const {
        std::cout << "Available Currencies:" << std::endl;
        for (const auto& currency : currencies) {
            std::cout << currency << std::endl;
        }
    }

    // Print the default currency
    void printDefaultCurrency() const {
        std::cout << "Default Currency: " << defaultCurrency << std::endl;
    }
};

// Class to filter prices within a specified range
class PriceRangeFilter {
private:
    // Minimum price
    double minPrice;
    // Maximum price
    double maxPrice;
    // Currency for the price range
    std::string currency;

public:
    // Constructor to initialize the PriceRangeFilter object
    PriceRangeFilter(double min, double max, const std::string& currency)
            : minPrice(min), maxPrice(max), currency(currency) {
        // Check if minimum price is greater than maximum price
        if (min > max) {
            std::cerr << "Error: Minimum price cannot be greater than maximum price." << std::endl;
            std::exit(EXIT_FAILURE);
        }
    }
    // Get the minimum price
    double getMinPrice() const {
        return minPrice;
    }
    // Get the maximum price
    double getMaxPrice() const {
        return maxPrice;
    }
    // Get the currency for the price range
    std::string getCurrency() const {
        return currency;
    }
    // Print the price range for a given category
    void printPriceRange(const std::string& category) const {
        std::cout << "Price Range for " << category << " in " << currency << ": $" << minPrice << " - $" << maxPrice << std::endl;
    }
};

// Structure to store information about public transport schedules
struct TransportInfo {
    std::string city;
    std::string mode;
    std::string route;
    std::string frequency;
};

// Class to display public transport schedules for a given country
class PublicTransportSchedule {
public:
    // Display the public transport schedule for a given country
    void displaySchedule(const std::string& country) {
        std::cout << "Public transport schedule for " << country << ":" << std::endl;
        std::vector<TransportInfo> schedules = getSchedules(country);

        // Check if schedules are available for the country
        if (schedules.empty()) {
            std::cout << "No schedule available for the selected country." << std::endl;
            return;
        }

        // Print schedule information for each city in the country
        for (const auto& info : schedules) {
            std::cout << "City: " << info.city << std::endl;
            std::cout << "Mode: " << info.mode << std::endl;
            std::cout << "Route: " << info.route << std::endl;
            std::cout << "Frequency: " << info.frequency << std::endl;
            std::cout << std::endl;
        }
    }

private:
    // Helper function to retrieve public transport schedules for a given country
    std::vector<TransportInfo> getSchedules(const std::string& country) {
        std::vector<TransportInfo> schedules;
        // Hardcoded schedules for different countries
        if (country == "Germany") {
            schedules = {
                    {"Berlin", "Bus", "Route 100", "Every 10 minutes"},
                    {"Berlin", "Train", "S-Bahn S5", "Every 15 minutes"},
                    {"Berlin", "Uber", "Available 24/7", "Average wait 5 minutes"},
                    {"Berlin", "Airplane", "BER to MUC", "Hourly flights"},

                    {"Munich", "Bus", "Route 54", "Every 20 minutes"},
                    {"Munich", "Train", "U-Bahn U6", "Every 10 minutes"},
                    {"Munich", "Uber", "Available 24/7", "Average wait 7 minutes"},
                    {"Munich", "Airplane", "MUC to FRA", "Hourly flights"},

                    {"Hamburg", "Bus", "Route 5", "Every 15 minutes"},
                    {"Hamburg", "Train", "S-Bahn S1", "Every 20 minutes"},
                    {"Hamburg", "Uber", "Available 24/7", "Average wait 6 minutes"},
                    {"Hamburg", "Airplane", "HAM to TXL", "Every 2 hours"},

                    {"Frankfurt", "Bus", "Route 30", "Every 25 minutes"},
                    {"Frankfurt", "Train", "U-Bahn U4", "Every 12 minutes"},
                    {"Frankfurt", "Uber", "Available 24/7", "Average wait 8 minutes"},
                    {"Frankfurt", "Airplane", "FRA to BER", "Hourly flights"}
            };

        } else if (country == "France") {
            schedules = {
                    {"Paris", "Bus", "Route 38", "Every 5 minutes"},
                    {"Paris", "Train", "Metro Line 1", "Every 3 minutes"},
                    {"Paris", "Uber", "Available 24/7", "Average wait 4 minutes"},
                    {"Paris", "Airplane", "CDG to NCE", "Hourly flights"},

                    {"Lyon", "Bus", "Route C3", "Every 10 minutes"},
                    {"Lyon", "Train", "Metro Line D", "Every 5 minutes"},
                    {"Lyon", "Uber", "Available 24/7", "Average wait 6 minutes"},
                    {"Lyon", "Airplane", "LYS to ORY", "Hourly flights"},

                    {"Marseille", "Bus", "Route 21", "Every 15 minutes"},
                    {"Marseille", "Train", "Metro Line 2", "Every 8 minutes"},
                    {"Marseille", "Uber", "Available 24/7", "Average wait 7 minutes"},
                    {"Marseille", "Airplane", "MRS to CDG", "Every 2 hours"},

                    {"Nice", "Bus", "Route 12", "Every 20 minutes"},
                    {"Nice", "Train", "Tram Line 2", "Every 10 minutes"},
                    {"Nice", "Uber", "Available 24/7", "Average wait 5 minutes"},
                    {"Nice", "Airplane", "NCE to CDG", "Hourly flights"}
            };
        } else if (country == "Iraq") {
            schedules = {
                    {"Baghdad", "Bus", "Route 1", "Every 15 minutes"},
                    {"Baghdad", "Train", "Central Line", "Every 30 minutes"},
                    {"Baghdad", "Uber", "Available 24/7", "Average wait 10 minutes"},
                    {"Baghdad", "Airplane", "BGW to EBL", "Daily flights"},

                    {"Basra", "Bus", "Route 5", "Every 20 minutes"},
                    {"Basra", "Train", "South Line", "Every 1 hour"},
                    {"Basra", "Uber", "Available 24/7", "Average wait 12 minutes"},
                    {"Basra", "Airplane", "BSR to BGW", "Daily flights"},

                    {"Erbil", "Bus", "Route 3", "Every 25 minutes"},
                    {"Erbil", "Train", "North Line", "Every 45 minutes"},
                    {"Erbil", "Uber", "Available 24/7", "Average wait 8 minutes"},
                    {"Erbil", "Airplane", "EBL to BGW", "Daily flights"},

                    {"Mosul", "Bus", "Route 7", "Every 30 minutes"},
                    {"Mosul", "Train", "East Line", "Every 1.5 hours"},
                    {"Mosul", "Uber", "Available 24/7", "Average wait 15 minutes"},
                    {"Mosul", "Airplane", "OSM to BGW", "Daily flights"}
            };
        } else if (country == "Egypt") {
            schedules = {
                    {"Cairo", "Bus", "Route 28", "Every 10 minutes"},
                    {"Cairo", "Train", "Metro Line 1", "Every 5 minutes"},
                    {"Cairo", "Uber", "Available 24/7", "Average wait 6 minutes"},
                    {"Cairo", "Airplane", "CAI to HRG", "Hourly flights"},

                    {"Alexandria", "Bus", "Route 12", "Every 15 minutes"},
                    {"Alexandria", "Train", "Tram Line 1", "Every 8 minutes"},
                    {"Alexandria", "Uber", "Available 24/7", "Average wait 5 minutes"},
                    {"Alexandria", "Airplane", "ALY to CAI", "Daily flights"},

                    {"Luxor", "Bus", "Route 3", "Every 20 minutes"},
                    {"Luxor", "Train", "South Line", "Every 1 hour"},
                    {"Luxor", "Uber", "Available 24/7", "Average wait 10 minutes"},
                    {"Luxor", "Airplane", "LXR to CAI", "Every 2 hours"},

                    {"Sharm El Sheikh", "Bus", "Route 8", "Every 25 minutes"},
                    {"Sharm El Sheikh", "Train", "Tourist Line", "Every 2 hours"},
                    {"Sharm El Sheikh", "Uber", "Available 24/7", "Average wait 7 minutes"},
                    {"Sharm El Sheikh", "Airplane", "SSH to CAI", "Hourly flights"}
            };
        }
        return schedules;
    }
};

// Structure to represent a gear item
struct GearItem {
    std::string name;
    bool isAvailable;
};

// Class to manage adventure gear rental service
class AdventureGearRentalService {
public:
    // Constructor to initialize gear lists for different countries
    AdventureGearRentalService() {
        initializeGear();
    }

    // Function to rent gear for a specific country
    void rentGear(const std::string& country) {
        std::cout << "Adventure gear rental service for " << country << ":" << std::endl;

        // Get the gear list for the selected country
        auto gearList = getGearList(country);
        // Check if gear is available
        if (gearList.empty()) {
            std::cout << "No adventure gear rental service available for the selected country." << std::endl;
            return;
        }

        // Display available gear for rent
        std::cout << "Available gear for rent:" << std::endl;
        for (size_t i = 0; i < gearList.size(); ++i) {
            std::cout << i + 1 << ". " << gearList[i].name
                      << (gearList[i].isAvailable ? " (Available)" : " (Rented)") << std::endl;
        }

        // Get user's choice of gear
        int choice;
        std::cout << "Enter the number of the gear you want to rent: ";
        std::cin >> choice;

        // Validate user input
        if (choice < 1 || choice > gearList.size()) {
            std::cout << "Invalid choice." << std::endl;
            return;
        }

        // Rent the selected gear if available
        if (gearList[choice - 1].isAvailable) {
            gearList[choice - 1].isAvailable = false;
            std::cout << "You have successfully rented " << gearList[choice - 1].name << "." << std::endl;
        } else {
            std::cout << "Sorry, " << gearList[choice - 1].name << " is currently rented." << std::endl;
        }
    }

private:
    // Vectors to store gear lists for different countries
    std::vector<GearItem> germanyGear;
    std::vector<GearItem> franceGear;
    std::vector<GearItem> iraqGear;
    std::vector<GearItem> egyptGear;

    // Initialize gear lists for different countries
    void initializeGear() {
        germanyGear = {
                {"Hiking Boots", false},
                {"Mountain Bike", true},
                {"Camping Tent", true},
                {"Climbing Gear", true}
        };

        franceGear = {
                {"Surfboard", true},
                {"Snowboard", true},
                {"Paragliding Kit", false},
                {"Kayak", true}
        };

        iraqGear = {
                {"Desert Survival Kit", true},
                {"Camel Riding Gear", true},
                {"Archaeology Kit", false},
                {"Photography Kit", true}
        };

        egyptGear = {
                {"Diving Equipment", false},
                {"Quad Bike", true},
                {"Camel Riding Gear", true},
                {"Sandboarding Kit", true}
        };
    }

    // Get the gear list for a specific country
    std::vector<GearItem>& getGearList(const std::string& country) {
        if (country == "Germany") {
            return germanyGear;
        } else if (country == "France") {
            return franceGear;
        } else if (country == "Iraq") {
            return iraqGear;
        } else if (country == "Egypt") {
            return egyptGear;
        } else {
            // Return an empty vector if country is not found
            static std::vector<GearItem> empty;
            return empty;
        }
    }
};

// Class to manage time capsule interactions
class TimeCapsule {
public:
    // Function to leave a message at a specific location in a country
    void leaveMessage(const std::string& country) {
        std::cout << "Leave a message at a specific location in " << country << "." << std::endl;
        // Define a list of possible locations
        std::vector<std::string> locations = {"Berlin", "Paris", "Baghdad", "Cairo"};
        // Seed the random number generator
        srand(time(0));
        // Generate a random index for location selection
        int index = rand() % locations.size();
        // Get the randomly selected location
        std::string randomLocation = locations[index];
        // Display the message and location
        std::cout << "Message left at " << randomLocation << ": ";
        // Define a list of possible messages
        std::vector<std::string> messages = {
                "Greetings from a fellow traveler!",
                "Wish you were here!",
                "Discover the beauty of " + country + "!",
                "Memories made at " + randomLocation + " will last a lifetime!"
        };
        // Generate a random index for message selection
        index = rand() % messages.size();
        // Get the randomly selected message
        std::cout << messages[index] << std::endl;
    }
};

// Class to generate adventure stories
class AdventureStoryGenerator {
public:
    // Function to generate an adventure story for a specific country
    void generateStory(const std::string& country) {
        std::cout << "Generate an adventure story for " << country << "." << std::endl;

        // Define story elements for different countries
        std::vector<std::string> storyStarts, storyMiddles, storyEnds;
        // Germany story elements
        if (country == "Germany") {
            storyStarts = {"In the Bavarian Alps,", "During Oktoberfest,", "In the Black Forest,"};
            storyMiddles = {" you discover a hidden path", " you meet a friendly local who guides you", " you find an ancient relic"};
            storyEnds = {" leading to a stunning viewpoint.", " to a secret beer garden.", " that reveals a lost treasure."};
            // France story elements
        } else if (country == "France") {
            storyStarts = {"In the heart of Paris,", "While exploring Provence,", "On the beaches of Normandy,"};
            storyMiddles = {" you stumble upon a hidden café", " you find a hidden vineyard", " you encounter a mysterious figure"};
            storyEnds = {" with the best croissants.", " that produces exquisite wines.", " who shares tales of wartime heroism."};
        } else if (country == "Iraq") {
            storyStarts = {"In the ancient city of Babylon,", "Exploring the ruins of Ur,", "In the bustling markets of Baghdad,"};
            storyMiddles = {" you uncover a secret passage", " you meet a wise historian", " you find a rare artifact"};
            storyEnds = {" leading to a forgotten chamber.", " who tells you ancient stories.", " that holds untold stories."};
        } else if (country == "Egypt") {
            storyStarts = {"At the base of the Great Pyramid,", "Sailing the Nile,", "In the Valley of the Kings,"};
            storyMiddles = {" you discover a hidden tomb", " you meet a friendly archaeologist", " you find a forgotten manuscript"};
            storyEnds = {" with untouched treasures.", " who reveals ancient secrets.", " that describes a pharaoh's journey."};
            // Handle cases where country is not found
        } else {
            std::cout << "No adventure stories available for the selected country." << std::endl;
            return;
        }

        // Seed the random number generator
        srand(time(0));
        // Generate random indices for story elements
        int startIndex = rand() % storyStarts.size();
        int middleIndex = rand() % storyMiddles.size();
        int endIndex = rand() % storyEnds.size();

        // Combine story elements and display the generated story
        std::cout << storyStarts[startIndex] << storyMiddles[middleIndex] << storyEnds[endIndex] << std::endl;
    }
};

// Class to generate travel playlists
class TravelPlaylistGenerator {
public:
    // Function to generate a travel playlist for a specific country
    void generatePlaylist(const std::string& country) {
        std::cout << "Generate a travel playlist for " << country << "." << std::endl;
        // Define playlists for different countries
        std::vector<std::string> playlist;
        if (country == "Germany") {
            playlist = {"Beethoven - Symphony No. 9", "Rammstein - Du Hast", "Nena - 99 Luftballons", "Scorpions - Wind of Change"};
        } else if (country == "France") {
            playlist = {"Edith Piaf - La Vie en Rose", "Daft Punk - Get Lucky", "Charles Aznavour - La Bohème", "Stromae - Alors On Danse"};
        } else if (country == "Iraq") {
            playlist = {"Kadim Al Sahir - Baghdad", "Ilham Al Madfai - Khuttar", "Farida Mohammad Ali - Maqam", "Naseer Shamma - Elyoum"};
        } else if (country == "Egypt") {
            playlist = {"Tab Wana Maly - Warda El Gazaerya", "Amr Diab - Tamally Maak", "Umm Kulthum - Enta Omri", "Hakim - El Salam Alaykom"};
        } else {
            std::cout << "No playlist available for the selected country." << std::endl;
            return;
        }

        std::cout << "Travel Playlist:" << std::endl;
        for (const auto& song : playlist) {
            std::cout << "- " << song << std::endl;
        }
    }
};

class TravelQuoteLibrary {
public:
    // Function to display inspirational travel quotes related to a given country
    void displayQuotes(const std::string& country) {
        std::cout << "Browse inspirational travel quotes related to " << country << "." << std::endl;
        // Used vector to store quotes for different countries
        std::vector<std::string> quotes;
        if (country == "Germany") {
            quotes = {
                    "\"To travel is to discover that everyone is wrong about other countries.\" - Aldous Huxley",
                    "\"Life is either a daring adventure or nothing.\" - Helen Keller",
                    "\"Adventure awaits in every corner.\" - Unknown"
            };
        } else if (country == "France") {
            quotes = {
                    "\"Paris is always a good idea.\" - Audrey Hepburn",
                    "\"The world is a book, and those who do not travel read only a page.\" - Saint Augustine",
                    "\"Traveling – it leaves you speechless, then turns you into a storyteller.\" - Ibn Battuta"
            };
        } else if (country == "Iraq") {
            quotes = {
                    "\"Traveling – it leaves you speechless, then turns you into a storyteller.\" - Ibn Battuta",
                    "\"We wander for distraction, but we travel for fulfillment.\" - Hilaire Belloc",
                    "\"To travel is to live.\" - Hans Christian Andersen"
            };
        } else if (country == "Egypt") {
            quotes = {
                    "\"The journey not the arrival matters.\" - T.S. Eliot",
                    "\"Travel makes one modest. You see what a tiny place you occupy in the world.\" - Gustave Flaubert",
                    "\"The gladdest moment in human life, me thinks, is a departure into unknown lands.\" - Sir Richard Burton"
            };
        } else {
            // Check if quotes are available for the selected country
            std::cout << "No travel quotes available for the selected country." << std::endl;
            return;
        }
        // Display a random quote from the list
        srand(time(0));
        int index = rand() % quotes.size();
        std::cout << "Quote: " << quotes[index] << std::endl;
    }
};

class TravelMoodBoardBuilder {
public:
    // Function to create a virtual mood board for travel plans
    void buildMoodBoard(const std::string& country) {
        std::cout << "Create a virtual mood board to inspire travel plans for " << country << "." << std::endl;
        std::cout << "Select your message from the options below:" << std::endl;

        // Create a vector of message options
        std::vector<std::string> messages = {
                "Welcome to our travel mood board!",
                "Explore the beauty of " + country + "!",
                "Adventure awaits around every corner.",
                "Let's make unforgettable memories together.",
                "Dreaming of far-off destinations.",
                "Discover new cultures and experiences.",
                "Share your travel stories and inspirations.",
                "Wander often, wonder always.",
                "Travel opens the heart and broadens the mind.",
                "Every journey begins with a single step."
        };

        // Display the message options with numbers
        for (int i = 0; i < messages.size(); ++i) {
            std::cout << i + 1 << ". " << messages[i] << std::endl;
        }

        // Get user input for message selection
        int choice2;
        std::cout << "Enter the number of the message you want to select: ";
        std::cin >> choice2;

        // Validate user input and display the selected message
        if (choice2 >= 1 && choice2 <= messages.size()) {
            std::cout << "You have selected the following message:" << std::endl;
            std::cout << messages[choice2 - 1] << std::endl;
            std::cout << "Note: This message will be visible to others on the mood board." << std::endl;
        } else {
            std::cout << "Invalid message selection." << std::endl;
        }
    }
};


// Abstract base class for minigames
class Minigame {
public:
    virtual void play() = 0;
};

// Minigame: Guess the Number
class GuessTheNumber : public Minigame {
    int secretNumber;
    int maxGuesses;
    int currentGuess;

public:
    GuessTheNumber(int maxRange) {
        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<> distribution(1, maxRange);
        secretNumber = distribution(generator);
        maxGuesses = 10;
        currentGuess = 0;
    }

    void play() override {
        std::cout << "Guess the number between 1 and " << maxGuesses << std::endl;

        while (currentGuess < maxGuesses) {
            int guess;
            std::cout << "Enter your guess: ";
            std::cin >> guess;

            if (guess == secretNumber) {
                std::cout << "Congratulations! You guessed the number!" << std::endl;
                return;
            } else if (guess < secretNumber) {
                std::cout << "Too low. Try again." << std::endl;
            } else {
                std::cout << "Too high. Try again." << std::endl;
            }

            currentGuess++;
        }

        std::cout << "You ran out of guesses. The number was " << secretNumber << std::endl;
    }
};

class RockPaperScissors : public Minigame {
    std::string userChoice;
    std::string computerChoice;

public:
    RockPaperScissors() {}

    void play() override {
        std::cout << "Let's play Rock, Paper, Scissors!" << std::endl;
        std::cout << "Enter your choice (rock, paper, or scissors): ";
        std::cin >> userChoice;

        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<> distribution(1, 3);
        int randomNum = distribution(generator);

        switch(randomNum) {
            case 1:
                computerChoice = "rock";
                break;
            case 2:
                computerChoice = "paper";
                break;
            case 3:
                computerChoice = "scissors";
                break;
        }

        std::cout << "Computer chooses: " << computerChoice << std::endl;

        if (userChoice == computerChoice) {
            std::cout << "It's a tie!" << std::endl;
        } else if ((userChoice == "rock" && computerChoice == "scissors") ||
                   (userChoice == "paper" && computerChoice == "rock") ||
                   (userChoice == "scissors" && computerChoice == "paper")) {
            std::cout << "Congratulations! You win!" << std::endl;
        } else {
            std::cout << "Sorry, you lose. Better luck next time!" << std::endl;
        }
    }
};

class Hangman : public Minigame {
    std::string wordToGuess;
    std::string guessedWord;
    int remainingAttempts;

public:
    Hangman() {
        std::vector<std::string> words = {"apple", "banana", "orange", "strawberry", "pineapple"};
        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<> distribution(0, words.size() - 1);
        wordToGuess = words[distribution(generator)];

        guessedWord = std::string(wordToGuess.length(), '-');

        remainingAttempts = 6;
    }

    void play() override {
        std::cout << "Welcome to Hangman!" << std::endl;
        std::cout << "Try to guess the word. You have " << remainingAttempts << " attempts." << std::endl;

        while (remainingAttempts > 0) {
            std::cout << "Current word: " << guessedWord << std::endl;
            std::cout << "Enter a letter: ";
            char guess;
            std::cin >> guess;

            bool found = false;
            for (int i = 0; i < wordToGuess.length(); ++i) {
                if (wordToGuess[i] == guess) {
                    guessedWord[i] = guess;
                    found = true;
                }
            }

            if (!found) {
                std::cout << "Incorrect guess. Try again." << std::endl;
                --remainingAttempts;
            }

            if (guessedWord == wordToGuess) {
                std::cout << "Congratulations! You guessed the word: " << wordToGuess << std::endl;
                return;
            }
        }

        std::cout << "Sorry, you're out of attempts. The word was: " << wordToGuess << std::endl;
    }
};


class TravelLocation2 {
public:
    std::string cityName2;
    std::string countryName2;
};

class Recommendation {
public:
    const vector<string> destinations;
    const vector<string> activities;

    Recommendation() : destinations({"Paris", "Cairo", "Beghdad", "Rome", "Berlin"}),
                       activities({"Sightseeing", "Hiking", "Beach Relaxation", "Cultural Tours", "Adventure Sports"}) {}

    string recommendation(const vector<string>& recommendations) {
        srand(time(nullptr));
        return recommendations[rand() % recommendations.size()];
    }
};


class UserReview {
public:
    std::string reviewText;
    int starRating;

};


class TravelLocation {
public:
    std::string cityName;
    std::string countryName;

};


class TouristActivity {
public:
    std::string activityName;
    std::string activityDescription;
    double activityCost;
    std::string activityLocation;
    TravelLocation destinationCity;


    TouristActivity(const std::string& name, const std::string& description, double cost,
                    const std::string& location, const TravelLocation& destinationCity)
            : activityName(name), activityDescription(description), activityCost(cost), activityLocation(location),
              destinationCity(destinationCity) {}


    std::string getActivityName() const { return activityName; }
    std::string getActivityDescription() const { return activityDescription; }
    std::string getActivityLocation() const { return activityLocation; }
    double getActivityCost() const { return activityCost; }


};


class TravelPlan {
public:
    TravelLocation destination;
    std::string tripStartDate;
    std::string tripEndDate;
    std::vector<TouristActivity> plannedActivities;




    void addNewActivity(const TouristActivity& activity) {
        plannedActivities.push_back(activity);
    }
};


class Eatery {
public:
    std::string eateryName;
    std::string foodType;
    std::string eateryLocation;


    std::vector<std::string> customerFeedback;


    void addCustomerFeedback(const std::string& feedbackText) {
        customerFeedback.push_back(feedbackText);
    }
};

class ImportantContact {
public:
    std::string contactName;
    std::string contactPhoneNumber;


    ImportantContact(const std::string& name, const std::string& phoneNumber)
            : contactName(name), contactPhoneNumber(phoneNumber) {}
};

void displayWelcomeMessage(int levels) {
    std::cout << ".______       _______  ______   __      .___________.____    ____\n"
                 "|   _  \\     |   ____||____  | |  |     |           |\\   \\  /   /\n"
                 "|  |_)  |    |  |__       / /  |  |     `---|  |----` \\   \\/   / \n"
                 "|      /     |   __|     / /   |  |         |  |       \\_    _/  \n"
                 "|  |\\  \\----.|  |____   / /    |  `----.    |  |         |  |    \n"
                 "| _| `._____||_______| /_/     |_______|    |__|         |__|    \n";
}

void displayWelcomeMessage2(int levels) {
    std::cout << "    _                                   _       _____                     \n"
                 "   /_\\    __   __   ___   _  _   _ _   | |_    |_   _|  _  _   _ __   ___ \n"
                 "  / _ \\  / _| / _| / _ \\ | || | | ' \\  |  _|     | |   | || | | '_ \\ / -_)\n"
                 " /_/ \\_\\ \\__| \\__| \\___/  \\_,_| |_||_|  \\__|     |_|    \\_, | | .__/ \\___|\n"
                 "                                                        |__/  |_|          \n";
}



class PackingList {
public:
    std::vector<std::string> items;

    void addItem(const std::string& item) {
        items.push_back(item);
    }

    void displayList() const {
        if (items.empty()) {
            std::cout << "Your packing list is empty." << std::endl;
        } else {
            std::cout << "\nPacking List:" << std::endl;
            for (const std::string& item : items) {
                std::cout << "- " << item << std::endl;
            }
        }
    }
};

class TravelInsurance {
public:
    std::string providerName;
    std::string coverageDetails;
    std::string contactInformation;

    TravelInsurance(const std::string& name, const std::string& details, const std::string& contact)
            : providerName(name), coverageDetails(details), contactInformation(contact) {}
};

class Phrasebook {
public:
    std::map<std::string, std::string> phrases;

    void addPhrase(const std::string& language, const std::string& phrase, const std::string& translation) {
        phrases[language + ":" + phrase] = translation;
    }

    void displayPhrases(const std::string& language) const {
        std::cout << "\nBasic Phrases in " << language << ":" << std::endl;
        for (const auto& pair : phrases) {
            if (pair.first.find(language + ":") == 0) {
                std::cout << "- " << pair.first.substr(language.size() + 1) << ": " << pair.second << std::endl;
            }
        }
    }
};

void displayMainMenu() {
    std::cout << "Extra Menu:" << std::endl;
    std::cout << "1. Public Transport Schedule" << std::endl;
    std::cout << "2. Adventure Gear Rental Service" << std::endl;
    std::cout << "3. Time Capsule" << std::endl;
    std::cout << "4. Adventure Story Generator" << std::endl;
    std::cout << "5. Travel Playlist Generator" << std::endl;
    std::cout << "6. Travel Quote Library" << std::endl;
    std::cout << "7. Travel Mood Board Builder" << std::endl;
    std::cout << "8. Exit" << std::endl;
}

int main() {
    Recommendation recommendation;
    std::vector<TravelPlan> plannedTrips;
    std::map<std::string, Eatery> eateryReviews;
    displayWelcomeMessage2(3);
    std::cout << "Welcome to the RE7LTY!" << std::endl;
    std::cout << "1. Sign in Account" << std::endl;
    std::cout << "2. Register an Account" << std::endl;
    std::cout << "3. Sign in as Guest" << std::endl;
    std::cout << "Choose your login option : ";
    int choice;
    while (!(std::cin >> choice) || choice < 1 || choice > 3) {
        std::cout << "Invalid input. Please enter from 1 to 3 : ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (choice == 1) {
        std::string userNickname, userPasscode;
        std::cout << "Enter your desired nickname: ";
        std::cin.ignore();
        std::getline(std::cin, userNickname);
        std::cout << "Enter your desired passcode: ";
        std::getline(std::cin, userPasscode);
        std::cout << "Account created successfully!" << std::endl;
    }
    else if (choice == 2) {
        string name, email, password;

        cout << "Enter your name: ";
        getline(cin, name);
        std::cin.ignore();
        cout << "Enter your email: ";
        getline(cin, email);
        std::cin.ignore();
        cout << "Enter your password: ";
        getline(cin, password);
        std::cin.ignore();
        User user(name, email, password);

        cout << "User created successfully!" << endl;
    } else if (choice == 3) {
        std::cout << "Signing in as guest..." << std::endl;
    }
    std::cout << "Sign in successful!" << std::endl;


    std::vector<ImportantContact> emergencyContacts = {
            {"Omar Darwish", "+20-123-456-7890"},
            {"Jasmin Nasser", "+20-987-654-3210"},
            {"Omar Aymen", "+20-525-191-2623"},
            {"Mazen Ahmed", "+20-555-111-2222"}

    };

    PackingList packingList;
    std::vector<TravelInsurance> insuranceOptions = {
            {"World Nomads", "Comprehensive coverage for medical emergencies, trip cancellation, and lost luggage.", "www.worldnomads.com"},

    };
    Phrasebook phrasebook;
    phrasebook.addPhrase("Arabic", "Marhaban", "Hello");
    phrasebook.addPhrase("Arabic", "Shoukran", "Thank you");
    phrasebook.addPhrase("Arabic", "maa salama", "Goodbye");
    phrasebook.addPhrase("Arabic", "naam", "Yes");
    phrasebook.addPhrase("Arabic", "la", "No");

    while (true) {
        displayWelcomeMessage(3);
        std::cout << "\nRE7LTY: Your ultimate travel companion!\n";
        std::cout << "Plan trips, discover destinations, and manage your travel essentials.\n";
        std::cout << "Your world, your way.\n";

        int userChoice;
        std::cout << "\nMain Menu:" << std::endl;
        std::cout << "1. Travel Tips" << std::endl;
        std::cout << "2. Plan a Trip" << std::endl;
        std::cout << "3. Add Restaurant Review" << std::endl;
        std::cout << "4. View Restaurant Reviews" << std::endl;
        std::cout << "5. Add Activity to Trip" << std::endl;
        std::cout << "6. View Trip Activities" << std::endl;
        std::cout << "7. Emergency Contacts" << std::endl;
        std::cout << "8. Packing List" << std::endl;
        std::cout << "9. Travel Insurance Information" << std::endl;
        std::cout << "10. Phrasebook" << std::endl;
        std::cout << "11. Destination & Event Recommendation" << std::endl;
        std::cout << "12. Play Minigames" << std::endl;
        std::cout << "13. Extra" << std::endl;
        std::cout << "14. Price Range" << std::endl;
        std::cout << "15. Currency Converter" << std::endl;
        std::cout << "16. Search" << std::endl;
        std::cout << "17. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        while (!(std::cin >> userChoice) || userChoice < 1 || userChoice > 17) {
            std::cout << "Invalid input. Please enter a number between 1 and 17: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        if (userChoice == 1) {
            std::cout << "\nHere are some travel tips:" << std::endl;
            std::cout << "- Pack light and only bring essentials." << std::endl;
            std::cout << "- Learn some basic phrases in the local language." << std::endl;
            std::cout << "- Be respectful of local customs and traditions." << std::endl;
            std::cout << "- Try the local cuisine!" << std::endl;

        } else if (userChoice == 2) {
            std::vector<std::string> countries = {"Egypt", "France", "Germany", "Iraq"};
            std::map<std::string, std::vector<std::string>> citiesByCountry = {
                    {"Egypt", {"Cairo", "Alexandria", "Giza", "Luxor", "Aswan", "Hurghada", "Sharm El Sheikh"}},
                    {"France", {"Paris", "Lyon", "Marseille", "Nice", "Toulouse", "Bordeaux", "Strasbourg"}},
                    {"Germany", {"Berlin", "Munich", "Hamburg", "Cologne", "Frankfurt", "Stuttgart", "Dresden"}},
                    {"Iraq", {"Baghdad", "Basra", "Mosul", "Erbil", "Najaf"}}
            };

            std::cout << "\nAvailable Countries:" << std::endl;
            for (int i = 0; i < countries.size(); ++i) {
                std::cout << i + 1 << ". " << countries[i] << std::endl;
            }

            int countryChoice;
            std::cout << "Choose a country: ";
            while (!(std::cin >> countryChoice) || countryChoice < 1 || countryChoice > countries.size()) {
                std::cout << "Invalid input. Please enter a number between 1 and " << countries.size() << ": ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            std::string selectedCountry = countries[countryChoice - 1];

            std::cout << "\nAvailable Cities in " << selectedCountry << ":" << std::endl;
            for (int i = 0; i < citiesByCountry[selectedCountry].size(); ++i) {
                std::cout << i + 1 << ". " << citiesByCountry[selectedCountry][i] << std::endl;
            }

            int cityChoice;
            std::cout << "Choose a city: ";
            while (!(std::cin >> cityChoice) || cityChoice < 1 || cityChoice > citiesByCountry[selectedCountry].size()) {
                std::cout << "Invalid input. Please enter a number between 1 and " << citiesByCountry[selectedCountry].size() << ": ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            std::string selectedCity = citiesByCountry[selectedCountry][cityChoice - 1];

            TravelPlan newTrip;
            newTrip.destination.cityName = selectedCity;
            newTrip.destination.countryName = selectedCountry;

            std::cout << "Enter trip start date (YYYY-MM-DD): ";
            std::cin >> newTrip.tripStartDate;
            std::cout << "Enter trip end date (YYYY-MM-DD): ";
            std::cin >> newTrip.tripEndDate;

            plannedTrips.push_back(newTrip);
            std::cout << "Trip to " << selectedCity << ", " << selectedCountry << " planned successfully!" << std::endl;

        } else if (userChoice == 3) {
            std::string eateryName, foodType, eateryLocation, feedbackText;

            std::cout << "Enter eatery name: ";
            std::cin.ignore();
            std::getline(std::cin, eateryName);

            std::cout << "Enter food type: ";
            std::getline(std::cin, foodType);

            std::cout << "Enter eatery location: ";
            std::getline(std::cin, eateryLocation);

            std::cout << "Enter your feedback: ";
            std::getline(std::cin, feedbackText);

            if (eateryReviews.count(eateryName) == 0) {
                Eatery newEatery;
                newEatery.eateryName = eateryName;
                newEatery.foodType = foodType;
                newEatery.eateryLocation = eateryLocation;
                newEatery.addCustomerFeedback(feedbackText);
                eateryReviews[eateryName] = newEatery;
            } else {
                eateryReviews[eateryName].addCustomerFeedback(feedbackText);
            }

            std::cout << "Review added successfully!" << std::endl;

        } else if (userChoice == 4) {
            if (eateryReviews.empty()) {
                std::cout << "No restaurant reviews available yet." << std::endl;
            } else {
                std::cout << "\nRestaurant Reviews:" << std::endl;
                for (const auto& pair : eateryReviews) {
                    std::cout << "Eatery Name: " << pair.second.eateryName << std::endl;
                    std::cout << "Food Type: " << pair.second.foodType << std::endl;
                    std::cout << "Location: " << pair.second.eateryLocation << std::endl;
                    std::cout << "Customer Feedback:" << std::endl;
                    for (const std::string& feedback : pair.second.customerFeedback) {
                        std::cout << "- " << feedback << std::endl;
                    }
                    std::cout << std::endl;
                }
            }

        } else if (userChoice == 5) {
            if (plannedTrips.empty()) {
                std::cout << "No planned trips found. Please plan a trip first." << std::endl;
            } else {
                std::cout << "\nPlanned Trips:" << std::endl;
                for (int i = 0; i < plannedTrips.size(); ++i) {
                    std::cout << i + 1 << ". " << plannedTrips[i].destination.cityName << ", "
                              << plannedTrips[i].destination.countryName << " ("
                              << plannedTrips[i].tripStartDate << " - " << plannedTrips[i].tripEndDate << ")"
                              << std::endl;
                }

                int tripChoice;
                std::cout << "Choose a trip to add an activity to: ";
                while (!(std::cin >> tripChoice) || tripChoice < 1 || tripChoice > plannedTrips.size()) {
                    std::cout << "Invalid input. Please enter a number between 1 and " << plannedTrips.size() << ": ";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                std::string activityName, activityDescription, activityLocation;
                double activityCost;

                std::cout << "Enter activity name: ";
                std::cin.ignore();
                std::getline(std::cin, activityName);

                std::cout << "Enter activity description: ";
                std::getline(std::cin, activityDescription);

                std::cout << "Enter activity cost: ";
                while (!(std::cin >> activityCost)) {
                    std::cout << "Invalid input. Please enter a valid cost: ";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                std::cout << "Enter activity location: ";
                std::cin.ignore();
                std::getline(std::cin, activityLocation);

                TouristActivity newActivity(activityName, activityDescription, activityCost, activityLocation,
                                            plannedTrips[tripChoice - 1].destination);
                plannedTrips[tripChoice - 1].addNewActivity(newActivity);

                std::cout << "Activity added to trip successfully!" << std::endl;
            }

        } else if (userChoice == 6) {
            if (plannedTrips.empty()) {
                std::cout << "No planned trips found. Please plan a trip first." << std::endl;
            } else {
                std::cout << "\nPlanned Trips:" << std::endl;
                for (int i = 0; i < plannedTrips.size(); ++i) {
                    std::cout << i + 1 << ". " << plannedTrips[i].destination.cityName << ", "
                              << plannedTrips[i].destination.countryName << " ("
                              << plannedTrips[i].tripStartDate << " - " << plannedTrips[i].tripEndDate << ")"
                              << std::endl;
                }

                int tripChoice;
                std::cout << "Choose a trip to view its activities: ";
                while (!(std::cin >> tripChoice) || tripChoice < 1 || tripChoice > plannedTrips.size()) {
                    std::cout << "Invalid input. Please enter a number between 1 and " << plannedTrips.size() << ": ";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                const TravelPlan& selectedTrip = plannedTrips[tripChoice - 1];
                if (selectedTrip.plannedActivities.empty()) {
                    std::cout << "No activities planned for this trip yet." << std::endl;
                } else {
                    std::cout << "\nPlanned Activities for Trip to " << selectedTrip.destination.cityName << ", "
                              << selectedTrip.destination.countryName << ":" << std::endl;
                    for (const TouristActivity& activity : selectedTrip.plannedActivities) {
                        std::cout << "- Activity Name: " << activity.getActivityName() << std::endl;
                        std::cout << "  Description: " << activity.getActivityDescription() << std::endl;
                        std::cout<< "  Cost: " << activity.getActivityCost() << std::endl;
                        std::cout << "  Location: " << activity.getActivityLocation() << std::endl;
                        std::cout << std::endl;
                    }
                }
            }

        } else if (userChoice == 7) {
            std::cout << "\nEmergency Contacts:" << std::endl;
            for (const ImportantContact& contact : emergencyContacts) {
                std::cout << "- " << contact.contactName << ": " << contact.contactPhoneNumber << std::endl;
            }

        } else if (userChoice == 8) {
            int packingListChoice;
            std::cout << "\nPacking List Options:" << std::endl;
            std::cout << "1. Add Item" << std::endl;
            std::cout << "2. View List" << std::endl;
            std::cout << "Enter your choice: ";
            while (!(std::cin >> packingListChoice) || packingListChoice < 1 || packingListChoice > 2) {
                std::cout << "Invalid input. Please enter 1 or 2: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            if (packingListChoice == 1) {
                std::string newItem;
                std::cout << "Enter item to add: ";
                std::cin.ignore();
                std::getline(std::cin, newItem);
                packingList.addItem(newItem);
                std::cout << "Item added to packing list." << std::endl;
            } else {
                packingList.displayList();
            }

        } else if (userChoice == 9) {
            std::cout << "\nTravel Insurance Options:" << std::endl;
            for (const TravelInsurance& insurance : insuranceOptions) {
                std::cout << "- Provider: " << insurance.providerName << std::endl;
                std::cout << "  Coverage Details: " << insurance.coverageDetails << std::endl;
                std::cout << "  Contact Information: " << insurance.contactInformation << std::endl;
                std::cout << std::endl;
            }

        } else if (userChoice == 10) {
            std::string languageChoice;
            std::cout << "\nEnter the language you want phrases for: ";
            std::cin.ignore();
            std::getline(std::cin, languageChoice);
            phrasebook.displayPhrases(languageChoice);

        } else if (userChoice == 11) {
            string destination = recommendation.recommendation(recommendation.destinations);
            string activity = recommendation.recommendation(recommendation.activities);
            cout << "Destination Recommendation: " << destination << endl;
            cout << "Activity Recommendation: " << activity << endl;


        } else if (userChoice == 12) {
            while (true) {
                std::cout << "\nMinigames:" << std::endl;
                std::cout << "1. Guess the Number" << std::endl;
                std::cout << "2. Rock Paper Scissors" << std::endl;
                std::cout << "3. Hangman" << std::endl;
                std::cout << "4. Back to Main Menu" << std::endl;

                int choice;
                std::cout << "Enter your choice: ";
                std::cin >> choice;

                if (choice == 1) {
                    GuessTheNumber game(10);
                    game.play();
                } else if (choice == 2) {
                    RockPaperScissors game;
                    game.play();
                } else if (choice == 3) {
                    Hangman game;
                    game.play();
                } else if (choice == 4) {
                    break;
                } else {
                    std::cout << "Invalid choice. Please try again." << std::endl;
                }
            }
        } else if (userChoice == 13) {
            int choice;
            int countryChoice;
            std::string country;

            std::cout << "Choose the Country :" << std::endl;
            std::cout << "1.Egypt" << std::endl;
            std::cout << "2.Germany" << std::endl;
            std::cout << "3.France" << std::endl;
            std::cout << "4.Iraq" << std::endl;
            std::cin >> countryChoice;

            switch (countryChoice) {
                case 1:
                    country = "Egypt";
                    break;
                case 2:
                    country = "Germany";
                    break;
                case 3:
                    country = "France";
                    break;
                case 4:
                    country = "Iraq";
                    break;
                default:
                    std::cout << "Invalid country choice." << std::endl;
                    return 1;
            }
            bool continueCountryLoop = true;
            while (continueCountryLoop) {
                displayMainMenu();
                std::cout << "Enter your choice: ";
                std::cin >> choice;

                switch (choice) {
                    case 1: {
                        PublicTransportSchedule transportSchedule;
                        transportSchedule.displaySchedule(country);
                        break;
                    }
                    case 2: {
                        AdventureGearRentalService gearRentalService;
                        gearRentalService.rentGear(country);
                        break;
                    }
                    case 3: {
                        TimeCapsule timeCapsule;
                        timeCapsule.leaveMessage(country);
                        break;
                    }
                    case 4: {
                        AdventureStoryGenerator storyGenerator;
                        storyGenerator.generateStory(country);
                        break;
                    }
                    case 5: {
                        TravelPlaylistGenerator playlistGenerator;
                        playlistGenerator.generatePlaylist(country);
                        break;
                    }
                    case 6: {
                        TravelQuoteLibrary quoteLibrary;
                        quoteLibrary.displayQuotes(country);
                        break;
                    }
                    case 7: {
                        TravelMoodBoardBuilder moodBoardBuilder;
                        moodBoardBuilder.buildMoodBoard(country);
                        break;
                    }
                    case 8: {
                        std::cout << "Returning to the main menu" << std::endl;
                        continueCountryLoop = false;
                        break;
                    }
                    default:
                        std::cout << "Please try again." << std::endl;
                }
            }
        } else if (userChoice == 14) {
            std::vector<PriceRangeFilter> priceRanges;

            priceRanges.push_back(PriceRangeFilter(50.0, 150.0, "USA")); // Hotel
            priceRanges.push_back(PriceRangeFilter(20.0, 50.0, "USA"));  // Food
            priceRanges.push_back(PriceRangeFilter(20.0, 100.0, "USA")); // Transport
            priceRanges.push_back(PriceRangeFilter(10.0, 50.0, "USA"));  // Supermarket

            priceRanges.push_back(PriceRangeFilter(40.0, 120.0, "UK"));  // Hotel
            priceRanges.push_back(PriceRangeFilter(15.0, 40.0, "UK"));   // Food
            priceRanges.push_back(PriceRangeFilter(15.0, 80.0, "UK"));   // Transport
            priceRanges.push_back(PriceRangeFilter(8.0, 40.0, "UK"));    // Supermarket

            priceRanges.push_back(PriceRangeFilter(60.0, 200.0, "Germany"));  // Hotel
            priceRanges.push_back(PriceRangeFilter(25.0, 60.0, "Germany"));   // Food
            priceRanges.push_back(PriceRangeFilter(30.0, 150.0, "Germany"));  // Transport
            priceRanges.push_back(PriceRangeFilter(12.0, 60.0, "Germany"));   // Supermarket

            // Categories
            std::vector<std::string> categories = { "Hotel", "Food", "Transport", "Supermarket" };

            // Print price ranges for each category in every nation
            std::cout << "Price Ranges for Each Category in Every Nation:" << std::endl;
            for (const auto& category : categories) {
                std::cout << "Price Ranges for " << category << ":" << std::endl;
                for (size_t i = 0; i < priceRanges.size(); i += categories.size()) {
                    priceRanges[i].printPriceRange(category);
                }
                std::cout << std::endl;

            }

        } else if (userChoice == 16) {
          Search search;

          string query;
          cout << "Enter your search query: ";
          std::cin.ignore();
          getline(cin, query);

          vector<Destination> destinations = search.Destinations(query);
          vector<Activity> activities = search.Activities(query);
          vector<Service> services = search.Services(query);
          vector<Instruction> instructions = search.Instructions(query);
          vector<Comment> comments = search.Comments(query);
          vector<Song> songs = search.Songs(query);
          vector<SoccerTeam> soccerTeams = search.SoccerTeams(query);

          if (!destinations.empty()) {
            cout << "Destinations found:" << endl;
            for (const auto& destination : destinations) {
               cout << "- " << destination.name << " (" << destination.country << "): " << destination.description << endl;
            }
          } else {
             cout << "No destinations found for: " << query << endl;
          }

          if (!activities.empty()) {
            cout << "Activities found:" << endl;
            for (const auto& activity : activities) {
               cout << "- " << activity.name << " (" << activity.country << "): " << activity.description << endl;
            }
          } else {
            cout << "No activities found for: " << query << endl;
          }

          if (!services.empty()) {
             cout << "Services found:" << endl;
             for (const auto& service : services) {
               cout << "- " << service.name << " (" << service.country << "): " << service.description << endl;
             }
          } else {
             cout << "No services found for: " << query << endl;
          }


          if (!instructions.empty()) {
            cout << "Instructions found:" << endl;
            for (const auto& instruction : instructions) {
               cout << "- " << instruction.description << " (" << instruction.country << ")" << endl;
            }
          } else {
           cout << "No instructions found for: " << query << endl;
          }

          if (!comments.empty()) {
            cout << "Comments found:" << endl;
            for (const auto& comment : comments) {
              cout << "- " << comment.text << " (" << comment.country << ")" << endl;
            }
         } else {
           cout << "No comments found for: " << query << endl;
         }

          if (!songs.empty()) {
            cout << "Songs found:" << endl;
            for (const auto& song : songs) {
               cout << "- " << song.title << " by " << song.artist << " (" << song.country << ")" << endl;
            }
          } else {
           cout << "No songs found for: " << query << endl;
          }

          if (!soccerTeams.empty()) {
              cout << "Soccer Teams found:" << endl;
              for (const auto& team : soccerTeams) {
                 cout << "- " << team.name << " (" << team.country << ")" << endl;
              }
          } else {
            cout << "No soccer teams found for: " << query << endl;
          }


        } else if (userChoice == 15) {
            std::vector<std::string> currencies = { "USD", "EUR", "GBP", "JPY", "CAD" };
            std::string defaultCurrency = "USD";

            CurrencyConverter converter(currencies, defaultCurrency);

            converter.printCurrencies();
            converter.printDefaultCurrency();

            converter.addConversionRate("USD", "EUR", 0.92);
            converter.addConversionRate("EUR", "USD", 1.09);
            converter.addConversionRate("USD", "GBP", 0.81);
            converter.addConversionRate("GBP", "USD", 1.23);

            double amount;
            std::string fromCurrency, toCurrency;

            std::cout << "Enter the amount of money: ";
            std::cin >> amount;

            std::cout << "Enter the currency to convert from: ";
            std::cin >> fromCurrency;

            std::cout << "Enter the currency to convert to: ";
            std::cin >> toCurrency;

            double result = converter.convert(fromCurrency, toCurrency, amount);
            std::cout << amount << " " << fromCurrency << " is " << result << " " << toCurrency << std::endl;

            std::cout << "Returning to the main menu." << std::endl;
            continue;

        } else if (userChoice == 17) {
            std::cout << "Exiting the RE7LTY. Safe travels!" << std::endl;
            break;
        }
    }
    return 0;
}
