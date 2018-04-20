#ifndef GRAYLING_H
#define GRAYLING_H

class Grayling{
    protected:
        short age;
        string name;
        char gender;
        bool isalive;
        bool ismutant;
        string current_variation;
        double mpi_rate;
        double mp
        double m_at;
    public:
        Grayling();
        Grayling(char, string);
        void print();
        void givebirth(); 
        void aging();
};
class Grayling1: private Grayling{
    public:
        Grayling();
        Grayling(char, string);
}
class Grayling2: private Grayling{
    public:
        Grayling();
        Grayling(char, string);
}
class Grayling3: private Grayling{
    public:
        Grayling();
        Grayling(char, string);
}

#endif