#ifndef __POISSONGENERATOR_H__
#define __POISSONGENERATOR_H__


#include <random>
#include <ctime>


class PoissonGenerator 
{
    private:
        std::default_random_engine _generator;
        // The poisson process is done by using poisson arrival rate lambda
        // on an exponential distribution
        std::exponential_distribution<double> _distribution;

    public:
        PoissonGenerator(double mean);
        ~PoissonGenerator();
        double generate();
        
};

#endif // __POISSONGENERATOR_H__