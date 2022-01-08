
#include<iostream>
#include "Line.h"
using namespace std;
namespace sdds{

    Line::Line():LblShape::LblShape(){
        m_length = 0;
    }

    Line::Line(const char* label, int length):LblShape::LblShape(label) {
        m_length = 0;
        if (length > 0)m_length = length;
    }

    void Line::getSpecs(std::istream& istr) {
        LblShape::getSpecs(istr);
        istr >> m_length;
        istr.ignore(1000, '\n');
    }

    void Line::draw(std::ostream& ostr) const{
        if (m_length > 0 && LblShape::label() != nullptr) {
            ostr << LblShape::label()<<endl;
            char oldFill = ostr.fill('=');
            ostr.width(m_length);
            ostr << "";
            ostr.fill(oldFill);
        }
    }

    std::ostream& operator<<(std::ostream& ostr, const Line& A)
    {
        A.draw(ostr);
        return ostr;
    }
    std::istream& operator>>(std::istream& istr, Line& A)
    {
        A.getSpecs(istr);
        return istr;
    }
}