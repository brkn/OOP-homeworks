#ifndef GRAYLING_H
#define GRAYLING_H

#include <string>
using namespace std;
class Grayling{
    protected:
        short age;
        string name;
        char gender;
        bool isalive;
        bool ismutant;
        string current_variation;
		double mp;
    public:
        Grayling();
        Grayling(char, string);
		Grayling(const Grayling&);
        virtual void print() const = 0;
        virtual void givebirth() = 0; 
        virtual void aging() = 0;
};
class Grayling1: public Grayling{
	const static double mpi_rate;
    const static double m_at;	
    public:
        Grayling1();
        Grayling1(char, string);
		Grayling1(const Grayling1&, char, string);
		void print() const;
        void givebirth(); 
        void aging();
};
class Grayling2: public Grayling{
	const static double mpi_rate;
    const static double m_at;
    public:
        Grayling2();
        Grayling2(char, string);
		Grayling2(const Grayling2&, char, string);//copy constructor
		void print() const;
        void givebirth(); 
        void aging();
};
class Grayling3: public Grayling{
	const static double mpi_rate;
    const static double m_at;
    public:
        Grayling3();
        Grayling3(char, string);
		Grayling3(const Grayling3&, char, string);//copy constructor
		void print() const;
        void givebirth(); 
        void aging();
};

#endif