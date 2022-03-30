#include <string>
#include <iostream>

class Person {
    public:
    Person(int birth_day, int birth_month, int birth_year, std::string name);
    ~Person();
    int GetAge(int current_year);
    bool IsMyBirthDay(int current_day, int current_month, int current_year);
    std::string GetName();

    private:
    int birth_day_ = 0;
    int birth_month_ = 0;
    int birth_year_ = 0;
    std::string name_ = "";
};