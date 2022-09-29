#ifndef __EVENT_H__
#define __EVENT_H__

/**
 * @brief Event of a Discreet Event Simulation
 */
class Event{
    protected:
        double _triggerTime;

    public:
    
        /**
         * @brief Construct a new Event object
         * @param triggerTime is the time when Event should be processed
         */
        Event(double triggerTime);

        virtual void process();
        
        /**
         * @brief return the triggerTime
         * @return double  
         */
        double triggerTime();
        /*TO DO 
        -----------
        operators < , > and == pour que le set trie bien les event en fonction de triggerTime
        */
};

#endif // __EVENT_H__