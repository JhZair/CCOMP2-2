#include <string>

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <sstream>

using namespace std;

#ifndef TIME_H
#define TIME_H

class Time {
public:
    void setTime(int, int, int);
    string toUniversalString() const;
    string toStandardString() const;
private:
    unsigned int hour{ 0 };
    unsigned int minute{ 0 };
    unsigned int second{ 0 };
};

#endif

int main() {
    void Time.setTime(int h, int m, int s) {
        if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
            hour = h;
            minute = m;
            second = s;
        }
        else {
            throw invaid_argument("Hour, minute and/or second was out of range");
        }
    }
    Time::toUniversalString() const {
        ostringstream output;
        output << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ";" << setw(2) << second;
        return output.str();
    }
    string Time::toStandardString() const {
        ostringstream output;
        output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");
        return output.str();
    }

}