
#ifndef SDDS_TRUCK_H_
#define SDDS_TRUCK_H_
#include "MotorVehicle.h"

namespace sdds
{
    class Truck: public MotorVehicle{
        double m_capacity;
        double m_cargo;
        void setEmpty();
    public:
        Truck();
        Truck(const char* plate, int year, double capacity, const char* address);
        bool addCargo(double cargo);
        bool unloadCargo();
        std::ostream& write(std::ostream& ostr)const;
        std::istream& read(std::istream& istr);
    };
    std::ostream& operator<<(std::ostream& ostr, const Truck &A);
    std::istream& operator>>(std::istream& istr, Truck & A);
}
#endif