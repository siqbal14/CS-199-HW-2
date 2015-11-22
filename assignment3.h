//Create a separate file named assignment3.cpp and create the functions 

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
  	/* This function is a bit more complicated - 
  	* Create a new 2-d Grid on the heap where the values of a particular coordinate is the average of the 4 coordinates surrounding it
  	*/
  	void averageGrid(Grid & original);
  	//Stores the sum of all individual rows in a 1-d array. Print the 1-d array
  	void sumRows(Grid & original);
  	/* Flip the grid 180 degrees. Try to do it without using additional memory. 
  	*  If you can't, only then, create a new 2-d array on the heap to achieve this.
  	* Print both the grids.
  	*/
  	void rotateGrid(Grid & original);
  	
  	
  	
  	private:
  		int ** cells; // Grid for cells
  		int size; //Store the size of the 2-d array
  	
  	
};
