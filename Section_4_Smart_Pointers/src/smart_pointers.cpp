#include <memory>
#include <iostream>
#include <vector>
using namespace std;

/**
 * A simple class which just reports when it is created (constructor) and when it is destroyed (destructor).
*/
class Reporter
{
    public: 
    Reporter(std::string id_string) : ID(id_string)
    {
        std::cout << "Creating Reporter Object with ID: " << ID << std::endl;
    }

    ~Reporter()
    {
        std::cout << "Destroying Reporter Object with ID: " << ID << std::endl;
    }

    private:
    std::string ID;
};

int main()
{
    Reporter* raw = new Reporter("raw pointer 2020");
    unique_ptr<Reporter> unique = make_unique<Reporter>("unique pointer 2021");
    delete raw;
    return 0;
}
