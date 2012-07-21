#ifndef MyBrain_Gene_h
#define MyBrain_Gene_h

#include <iostream>

class Gene {

public:
    short numer_of_seeds;
    long long recipient_generator_seed;
    char *seeds;
    
    Gene(short numer_of_seeds, long long recipient_generator_seed,
         char *seeds);
};

#endif
