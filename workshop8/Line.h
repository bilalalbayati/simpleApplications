
#ifndef SDDS_LINE_H
#define SDDS_LINE_H
#include"LblShape.h"
namespace sdds{

    class Line:public LblShape{
        int m_length;
    public:
        Line();
        Line(const char* label, int length);
        void getSpecs(std::istream& istr);
        void draw(std::ostream& ostr)const;
    };
    std::ostream& operator<<(std::ostream& ostr, const Line& A);
    std::istream& operator>>(std::istream& istr, Line& A);
}

#endif