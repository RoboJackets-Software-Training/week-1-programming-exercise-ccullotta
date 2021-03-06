//Do not edit the next 4 lines
#include <iostream>
#include <vector>
using namespace std;
int main() {
	std::cout << "Use the wasd keys and enter to input a direction, or the E key to stop" << std::endl;

    // Write your code for step 1 here

    // Write your code for step 2 here
   vector<float> wheel_speeds(4);
   for (int i = 0; i < wheel_speeds.size(); i++){
   		wheel_speeds[i] = 0;
   }

    // Do not edit the next 5 lines
    bool keep_going = true;
    char direction;

    while (keep_going) {
        cin >> direction; //At the begining of every iteration look for an input from the user
        // Write rest of code here (within while loop)
        switch(direction) {
        	case 'w':
   				for (int i = 0; i < wheel_speeds.size(); i++){
   					wheel_speeds[i] = 1;
   				}
        		break;
        	case 'a':
        		wheel_speeds[0] = 0.5;
        		wheel_speeds[2] = 0.5;
        		wheel_speeds[1] = 1;
        		wheel_speeds[3] = 1;
        		break;
        	case 's':
        		for (int i = 0; i < wheel_speeds.size(); i++){
   					wheel_speeds[i] = -1;
   				}
   				break;
   			case 'd':
   				wheel_speeds[0] = 1;
        		wheel_speeds[2] = 1;
        		wheel_speeds[1] = 0.5;
        		wheel_speeds[3] = 0.5;
        		break;
        	case 'e':
        		for (int i = 0; i < wheel_speeds.size(); i++){
   					wheel_speeds[i] = 0;
   				}
   				cout << "Shutting Down" << endl;
   				keep_going = false;
   				break;
   			default:
   				cout << "Sorry I didn't get that. Try again." << endl;

        }
        for (int i = 0; i < wheel_speeds.size(); i++){
   			cout << "Wheel at index " << i << " has speed " << wheel_speeds[i] << endl;
   		}
        //
    }

}
