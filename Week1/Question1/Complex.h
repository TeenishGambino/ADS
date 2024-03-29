/*
CH-231-A
a1_p1.h
Abiral Banjade
abanjade@jacobs-university.de
*/
#include<iostream>

using namespace std;

class Complex
{
    private:
        double real;
        double imag;
    public:
        Complex();
        Complex(const Complex&);
        Complex(double , double);
        ~Complex();
        //Setter//
        void setReal(double);
        void setImag(double);
        //Getter//
        double getReal();
        double getImag();

        //Printer//
        void print();
        //Oveperator overloading//
        bool operator == (Complex const &obj);
};
#include"Complex.cpp"