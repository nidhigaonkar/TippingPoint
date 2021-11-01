#include "main.h"
//done
using namespace okapi;

extern Motor leftBack;
extern Motor leftFront;
extern Motor rightBack;
extern Motor rightFront;


void updateDrive();
void translatePID(double leftDistance, double rightDistance);
void rotate_PID(double turn_degrees);


//odometry code
double odometry();
void getX();  //change to double for odometry, void for testing
void getY();
//double getAngleDegrees();
void getAngle();
