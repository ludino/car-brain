#include "Port.h"

/*
 Set "portType"'s value
 */
Port::Port(PortType port_type) 
{
    
}

/*
 Returns the result of the boolean operation (specified in portType)
 between signal and nextPort.getOutput()
 
 If nextPort equals NULL; use signal[1] instead of nextPort.getOutput()
 */
bool Port::getOutput()
{
    bool signal2;
    if (next_port == NULL) 
    {
        signal2 = signal[1];
    }
    else 
    {
        signal2 = next_port->getOutput();
    }
    switch (port_type) 
    {
        case AND:   return (*signal && signal2);
        case OR:    return (*signal || signal2);
        case XOR:   return (*signal ^ signal2);
    }
    return false;
}