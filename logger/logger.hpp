#include <string>
#include <fstream>
class Logger
{
    private:
        std::ofstream myFile;
        // Private Constructor
        Logger();
        // Stop the compiler generating methods of copy the object
        Logger(Logger const& copy);            // Not Implemented
        Logger& operator=(Logger const& copy); // Not Implemented
      ~Logger();
    public:
        static Logger& getInstance();
        void logScore(std::string test_case, float points, float max_points);
};
