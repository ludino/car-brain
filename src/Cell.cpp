#include "cell.h"

Cell::Cell(Cell *cell_list, int number_of_cells) 
{
    this->cell_list = cell_list;
    this->number_of_cells = number_of_cells;
}

/*
 Generate a tree of ports and place it in mainPort
 */
bool Cell::applyGene(Gene gene)
{
    
}

/*
 Calcuate, based on cell_id, which signal in "input" which 
 should be set to true
 */
void Cell::setSignal(int cell_id)
{
    
}

/*
 Chekt the output from "mainPort" (which will traverse through all
 ports) and set "send_signals_next_time" accordingly
 */
void Cell::process()
{
    
}

/*
 Run setSignal() on all cells in "outputs"
 */
void Cell::sendSignal(int cell_id)
{
    
}