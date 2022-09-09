#ifndef __EVENT_H__
#define __EVENT_H__

class Event{
    protected:
        double _triggerTime;

    public:
        Event(double triggerTime);
        virtual void process();
        double triggerTime();
};

#endif // __EVENT_H__