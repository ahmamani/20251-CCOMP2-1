#ifndef HORA_H
#define HORA_H


class Hora
{
    public:
        Hora();
        Hora(int h, int m, int s);
        void setHour(int h);
        int getHour() const;
        void setMinutes(int m);
        int getMinutes() const;
        void setSeconds(int h);
        int getSeconds() const;
        void print() const;
    private:
        int hour;
        int minutes;
        int seconds;
};

#endif // HORA_H
