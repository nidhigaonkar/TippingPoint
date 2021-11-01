#include "main.h"
//done
using namespace okapi;

Motor itz_lift(itzLiftPort, false, AbstractMotor::gearset::red, AbstractMotor::encoderUnits::degrees);

int itzButtonCount = 0;

typedef struct PID pid;

pid IL;

// double MLsetpoint = 0;
// double MLintegral = 0;
// double MLprevError;
// double MLkP;
// double MLkI;
// double MLkD;
// double MLtarget;
// double MLerror;
// double MLderivative;
// double MLpower;

// double PIDMogoLift(double setpoint)  //dont need pid really
// {
//   MLkP = 0.5;
//   MLkI = 0;
//   MLkD = 0.1;
//
//   MLtarget = setpoint;
//   MLerror = setpoint - itz_lift.getPosition();
//   MLintegral += MLerror;
//   MLderivative = MLerror - MLprevError;
//
//   MLpower = MLkP * MLerror + MLkI * MLintegral + MLkD * MLderivative;
//
//   return MLpower;
// }

double itzPID(double setpoint)
{
  IL.kP = 0.5;
  IL.kI = 0;
  IL.kD = 0.05;

  IL.target = setpoint;
  IL.error = IL.target - itz_lift.getPosition();
  IL.integral += IL.error;
  IL.derivative = IL.error - IL.prevError;
  IL.power = IL.kP * IL.error + IL.kI * IL.integral + IL.kD * IL.derivative;

  return IL.power;
}


void updateItzLift()
{
  itz_lift.moveVelocity(100*(controller.getDigital(ControllerDigital::down) - controller.getDigital(ControllerDigital::up)));
}



void updateItzMacro()
{
  if (controller.getDigital(ControllerDigital::up) == 1)
  {
    itzButtonCount = 2;
  }
  else if(controller.getDigital(ControllerDigital::down) == 1)
  {
    itzButtonCount = 1;
  }

  if (itzButtonCount == 2)
  {
    itz_lift.moveVelocity(itzPID(50));
  }
  else if (itzButtonCount == 1)
  {
    itz_lift.moveVelocity(itzPID(330));
  }
}
