#include "PoissonGenerator.h"

PoissonGenerator::PoissonGenerator(double mean) :
    _generator(time(0)),
    _distribution(1.0 / mean)
{
    
}

PoissonGenerator::~PoissonGenerator()
{
    
}

double PoissonGenerator::generate()
{
    return _distribution(_generator);
}

