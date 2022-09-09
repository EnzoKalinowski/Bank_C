#ifndef __EVENT_H__
#define __EVENT_H__

class Event{
    protected:
        double _time;
    public:
        Event();
        double time();
        virtual void process();
};

#endif // __EVENT_H__