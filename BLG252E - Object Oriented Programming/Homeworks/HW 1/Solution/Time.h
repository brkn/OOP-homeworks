class Time{
    int minute, hour, day, month, year;
    public:
        Time(int,int,int,int,int); 
        //string getTime(); 
        bool operator<(Time); 
        bool operator>(Time);
        bool operator==(Time);
}