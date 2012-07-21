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
    bool input2;
    if (next_port == NULL) 
    {
        input2 = signal[1];
    }
    else 
    {
        input2 = next_port->getOutput();
    }
    switch (port_type) 
    {
        case AND:   return (*signal && input2);
        case OR:    return (*signal || input2);
        case XOR:   return (*signal ^ input2);
    }
    return false;
}