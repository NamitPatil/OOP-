#include <iostream>
using namespace std;

class Vehicle {
private:
    int numWheels;
    string color;
    int maxSpeed;
    int maxGears;
    int curGear;
    int curSpeed;
    bool started;
    bool stopped;

public:
    
    Vehicle(){
	numWheels=4;
	color="Black";
	maxSpeed=200;
	maxGears=6;
	curGear=0;
	curSpeed=0;
	started=false;
	stopped=true;
	}

    Vehicle(int wheels, string clr, int maxSpd, int maxGrs){
	
	    numWheels=wheels;
	    color=clr;
        maxSpeed=maxSpd;
	    maxGears=maxGrs;
	    curGear=0;
	    curSpeed=0;
	    started=false;
	    stopped=true;
	}

    
    int getWheels() 
	{ 
	  return numWheels; 
	}
    int getMaxGears()
	{ 
	 return maxGears;
	}
    int getMaxSpeed() 
	{ 
	   return maxSpeed; 
	}
    int getSpeed()
	{
	  return curSpeed;
	}
    string getColor() 
	{ 
	  return color; 
	}

   
    void setSpeed(int speed)
	 { 
	    curSpeed = speed;
	 }

    void start() {
        if (!started) {
            started = true;
            stopped = false;
            curSpeed = 0;
            curGear = 0;
        }
    }

    void stop() {
        if (!stopped) {
            started = false;
            stopped = true;
            curSpeed = 0;
            curGear = 0;
        }
    }

   
    void increaseSpeed() {
        if (started && curSpeed < maxSpeed) {
            curSpeed += 10;
            if (curSpeed > maxSpeed) curSpeed = maxSpeed;
        }
    }

    void decreaseSpeed() {
        if (started && curSpeed > 0) {
            curSpeed -= 10;
            if (curSpeed < 0) curSpeed = 0;
        }
    }

    
    void nextGear() {
        if (started && curGear < maxGears) {
            curGear++;
        }
    }

    void previousGear() {
        if (started && curGear > 0) {
            curGear--;
        }
    }

   
    void displayStatus() {
        cout << "Current Speed: " << curSpeed <<endl;
        cout << "Current Gear: " << curGear << endl;
        cout << "Vehicle Status: " << (started ? "Started" : "Stopped") << endl;
    }
};

int main() {
    
    Vehicle myVehicle;

    
    
    myVehicle.setSpeed(50);
    myVehicle.start();

    
    cout << "Number of Wheels: " << myVehicle.getWheels() << endl;
    cout << "Max Speed: " << myVehicle.getMaxSpeed() << " km/h" << endl;
    cout << "Color: " << myVehicle.getColor() << endl;

    
    int choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Increase Speed\n";
        cout << "2. Decrease Speed\n";
        cout << "3. Next Gear\n";
        cout << "4. Previous Gear\n";
        cout << "5. Start\n";
        cout << "6. Stop\n";
        cout << "7. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myVehicle.increaseSpeed();
                break;
            case 2:
                myVehicle.decreaseSpeed();
                break;
            case 3:
                myVehicle.nextGear();
                break;
            case 4:
                myVehicle.previousGear();
                break;
            case 5:
                myVehicle.start();
                break;
            case 6:
                myVehicle.stop();
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please choose again.\n";
        }
        myVehicle.displayStatus();
    } while (choice != 7);

    return 0;
}
