Goals;
-the goal of this program is to get us familiar with object oriented programming in C++
by creating a class instead of functions.

Input;
-the input is going to be very similer to last project, the user has to enter an int seed value
to start the program.

Output;
-Output should simulate the horse race in the form of a string value and it also should print
all the tracks everytime a horse either makes a move or stops.

	"""
	Please enter a random seed value: 700

	.........0.....
	..........1....
	............2..
	..............3
	........4......


	.........0.....
	..........1....
	.............2.
	...............
	........4......

	Horse 3 wins!

	""


Steps;
- unlike the last project, this project we have to use classes
-creat two classes starting by the fist one
-assign values to privte and public
-make a main funtion after the two classes to call for functions when needed
-in the make funtion we're going to have and a random seed input from the user
-use :: to accses privets in the two classes
-have a funtion in public to flip the coin
-if 1 it's going to move forward if 0 it's going to stay the same
-loop over five times
-check if the horse reaches 15th postion
