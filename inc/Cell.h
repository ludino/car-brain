#ifndef car_brain_cell_h
#define car_brain_cell_h

#include <iostream>
#include "Port.h"
#include "Gene.h"

class Cell {

public:
    int id;                 // This cells id
    int number_of_input;    // Number of input ports
    bool *inputs;           // List if input signals
    int number_of_cells;    // Number of cells
    Cell *cell_list;        // List of all the cells in the brain
    
    Cell(Cell *cell_list, int number_of_cells);

    bool applyGene(Gene gene);      // Read "gene" and generate a tree
                                    // of ports and places it at main_port
    
    void setSignal(int cell_id);    // Method for other cells 
                                    // to give this a signal
    
    void process();                 // Method for the brain to tell
                                    // this cell to process all received
                                    // signals, and generate the list
                                    // of cells which this cell will 
                                    // signal
    
    void sendSignal(int cell_id);   // Method for the brain to tell this
                                    // cell to send signals to all cells
                                    // in the list "outputs"

private:
    int number_of_outputs;          // Number of cells this cell will
                                    // send signals to
    
    Cell **outputs;                 // List of Cells this cell will
                                    // send signals to 
    
    bool send_signals_next_time;    // Whether sendSignal() whould send
                                    // signals or not

    Port *main_port;                 // The main port for this cell
};
 
#endif