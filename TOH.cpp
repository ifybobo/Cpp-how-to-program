/**
* Solving the tower of hanoi using recursion
* by Bobo Anago-Amanze
* Deitel C++ how to program.
**/

#include<iostream>
#include<iomanip>

using namespace std;

int solv_toh(int disk_no, int src_peg, int dest_peg, int tmp_peg);

int main()
{
	
	/********* Declare variables **************/
	
	int disk_no, src_peg = 0, dest_peg = 0, tmp_peg = 0;
	
	/********* Input values for the toh parameters ******/
	
	cout << "\nPlease enter the number of disks to be moved: " << endl;
	cin >>  disk_no;
	
	cout << "\nPlease enter the source of the disk's': " << endl;
	cin >> src_peg;
	
	cout << "\nPlease enter the destination of the disk's': " << endl;
	cin >> dest_peg;
	
	cout << "\nPlease enter the temporary peg: " << endl;
	cin >> tmp_peg;
	
	/*********** Use the function solv_toh to print the algorithm *******/

	solv_toh(disk_no, src_peg, dest_peg, tmp_peg);
	
	return 0;
}

int solv_toh(int disk_no, int src_peg, int dest_peg, int tmp_peg)
{
	if (disk_no == 1)
		cout << setw(4) << src_peg << " - " << dest_peg << endl;
	else
	{
		solv_toh(disk_no - 1, src_peg, tmp_peg, dest_peg);
		solv_toh(1, src_peg, dest_peg, tmp_peg);
		solv_toh(disk_no - 1, tmp_peg, dest_peg, src_peg);
	}
	return 0;
}