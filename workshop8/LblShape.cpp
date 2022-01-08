
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
#include "LblShape.h"
#include "Shape.h"
using namespace std;
namespace sdds{

    char const *LblShape::label() const{
        return (const char*)m_label;
    }

    LblShape::LblShape(const char* label){
        m_label = nullptr;
        if (label != nullptr) {
            m_label = new char[Shape::strLen(label) + 1];
            Shape::strCpy(m_label, label);
        }
    }

    void LblShape::draw(std::ostream& ostr)const {
    
    }

    LblShape::LblShape(){
        m_label = nullptr;
    }

    void LblShape::getSpecs(std::istream& istr){
        delete[]m_label;
        string s;
        getline(istr, s,',');
        if (Shape::strLen(s.c_str()) > 0) {
            m_label = new char[Shape::strLen(s.c_str()) + 1];
            Shape::strCpy(m_label, s.c_str());
        }
    }

    LblShape::~LblShape() {
        delete[]m_label;
    }
}