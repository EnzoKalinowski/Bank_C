#ifndef __POISSONGENERATOR_H__
#define __POISSONGENERATOR_H__


#include <random>
#include <ctime>


class PoissonGenerator 
{
    private:
        std::default_random_engine _generator;
        std::exponential_distribution<double> _distribution;

    public:
        /**
         * @brief Construct a new Poisson Generator object
         * 
         * @param mean 
         */
        PoissonGenerator(double mean);
        /**
         * @brief Destroy the Poisson Generator object
         * 
         */
        ~PoissonGenerator();
        /**
         * @brief generate number with Poisson processus
         * 
         * @return double 
         */
        double generate();
        
};

#endif // __POISSONGENERATOR_H__