//Create a separate file named assignment3.cpp and create the functions listed below. The minimum grid size should be 20*20

#include <iostream>

using namespace std;

class Grid
{
	public:
	// Create a 2-d array with the dimensions which are in the parameters
  	void createGrid(int x, int y);
  	
  	// Default Contructor
  	Grid();
  	
  	//Copy Constructor
  	Grid(const Grid & rhs);
  	
  	//Destructor - Free up the memory associated with the Grid
  	~Grid();
  	
  	//Overloaded assignment operator
  	Grid& operator=(const Grid & rhs);
  	
  	/* This function is a bit more complicated - 
  	* Create a new 2-d Grid on the heap where the values of a particular coordinate is the average of the 4 coordinates surrounding it. 
  	* This function returns a Grid object. You can assume dummy values if some coordinates don't exist. Like for (0,0), 
  	* the 4 coordinates surrounding it are (1,0),(0,1),(0,-1), (-1,0). You can create a dummy value (eg - 0) for (0,-1) and (-1,0) as those are not in the grid.
  	*/
  	Grid averageGrid(Grid & original);
  	
  	//Stores the sum of all individual rows in a 1-d array. Print the 1-d array
  	
  	void sumRows(Grid & original);
  	/* Flip the grid 180 degrees. Try to do it without using additional memory. 
  	*  If you can't, only then, create a new 2-d array on the heap to achieve this.
  	* Print both the grids.
  	*/
  	
  	void rotateGrid(Grid & original);
  	
  	/* Flip the grid 90 degrees to the left. Try to do it without using additional memory. 
  	*  If you can't, only then, create a new 2-d array on the heap to achieve this.
  	* Print both the grids.
  	*/
  	
  	void rotateLeft(Grid & original);
  	
  	
  	
  	private:
  		int ** cells; // Grid for cells
  		int size; //Store the size of the 2-d array
  	
  	
};
