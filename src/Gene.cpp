#include "Gene.h"

Gene::Gene(short numer_of_seeds, long long recipient_generator_seed,
           char *seeds) 
{
    this->numer_of_seeds = numer_of_seeds;
    this->recipient_generator_seed = recipient_generator_seed;
    
}