#include "person.h"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

Person::Person(int birth_day, int birth_month, int birth_year, std::string name) {
    birth_day_ = birth_day > 0 && birth_day <= 31 ? birth_day : 0;
    birth_month_ = birth_month > 0 && birth_month <= 12 ? birth_month : 0;
    birth_year_ = birth_year > 0 && birth_year <= 2022 ? birth_year : 0;
    name_ = name;
}

Person::~Person() {

}

int Person::GetAge(int current_year) {
    return current_year - birth_year_;
}

bool Person::IsMyBirthDay(int current_day, int current_month, int current_year) {
    if (current_day == birth_day_ && current_month == birth_month_ && current_year == birth_year_) {
        return true;
    }
    else {
        return false;
    }
}

std::string Person::GetName() {
    return name_;
}