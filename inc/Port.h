#ifndef MyBrain_Port_h
#define MyBrain_Port_h

#include <iostream>

class Port { 
    
public:
    enum PortType { AND = 0, OR, XOR };
    
    PortType port_type;      // Type of port
    bool *signal;           // Pointer to a signal in a cell
    Port *next_port;         // Pointer to the next port
    
    Port(PortType port_type);
    
    bool getOutput();       // The boolean operation between signal 
                            // and nextPort.getOutput()
};

#endif
