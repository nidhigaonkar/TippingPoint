#include "main.h"
//#include "drivetrain.hpp"

using namespace okapi;


void awpAuton(){

  rightFront.moveVelocity(50);


  // //route 2: awp side
  // itz_lift.moveVelocity(itzPID(330)); //lift down
  // pros::delay(10);
  // pros::c::adi_digital_write(pneumaticLeftPort, LOW);
  // translatePID(-100, -100);
  // pros::c::adi_digital_write(pneumaticLeftPort, HIGH);
  // pros::delay(1000);
  // itz_lift.moveVelocity(itzPID(50)); //lift up
  // rotate_PID(-29); //tune  //rotate toward central neutral mogo
  //
  // itz_lift.moveVelocity(itzPID(330)); //lift down
  // translatePID(-50, -50);
  // itz_lift.moveVelocity(itzPID(50)); //lift up
  // translatePID(50,50); //move backward
  // rotate_PID(30);  //use four bar to get alliance mogo (AWP)
  // fourBarLift.moveVelocity(200);  //lift up



  }


// void neutralMogos(){
//   //basically awpAuton without the alliance onw (NO AWP)
//
//   itz_lift.moveVelocity(itzPID(330)); //lift down
//   pros::delay(10);
//   pros::c::adi_digital_write(pneumaticLeftPort, LOW);
//   translatePID(-100, -100);
//   pros::c::adi_digital_write(pneumaticLeftPort, HIGH);
//   pros::delay(1000);
//   itz_lift.moveVelocity(itzPID(50)); //lift up
//   rotate_PID(-29); //tune  //rotate toward central neutral mogo
//
//
// }
//
//
// void route1(){
//   //middle neutral mogo then awp mogo  + rings
//   rotate_PID(10);
//   itz_lift.moveVelocity(itzPID(330)); //lift down
//   pros::delay(10);
//   pros::c::adi_digital_write(pneumaticLeftPort, LOW);
//   translatePID(-100, -100);
//   pros::c::adi_digital_write(pneumaticLeftPort, HIGH);
//
//
// }
//
//
//
// void skills(){
//
//
//
//
//
//
//   //not on AWP zone side BLUE alliance
//   //itz lift side facing forward
//   //edit with rollers always running
//   //four bar faing foward, to go forward pid +
//
//   // itz_lift.moveVelocity(itzPID(330)); //lift down
//   // pros::delay(10);
//   // pros::c::adi_digital_write(pneumaticLeftPort, LOW);
//   // translatePID(-100, -100);
//   // pros::c::adi_digital_write(pneumaticLeftPort, HIGH);
//   // rotate_PID(180);
//   // translatePID(10,10); //might have to be negative
//   // rollers.moveVelocity(400); // pick up rings and put in mogo
//   // fourBarLift.moveVelocity(800);  //pick up alliance mogo
//   // rotate_PID(30); //tune (face toward platform)
//   // translatePID(10, 10);
//   // fourBarLift.moveVelocity(300); //four bar lift down slightly  //put alliance mogo on platform
//   // translatePID(-10,-10);
//   // rotate_PID(180);
//   // itz_lift.moveVelocity(itzPID(330)); //lift down
//   // translatePID(-10,-10); //put neutral mogo on platform  by moving forward
//   // translatePID(-5,-5);
//   // rotate_PID(180);
//   // rotate_PID(20); //tune (move parallel to platform) four bar lift facing forward
//   // rollers.moveVelocity(400);
//   // translatePID(40,40);  //pick up rings  (need to fix)
//   // pros::delay(10);
//   // rollers.moveVelocity(0); //keep rings in plexi???
//   // rotate_PID(-15);  // tune turn toward platform
//   // fourBarLift.moveVelocity(100); //four bar lift down
//   // translatePID(5,5);  //push the two mogos onto the platform
//   // translatePID(-10, -10); // move back
//   // rotate_PID(180);
//   // itz_lift.moveVelocity(itzPID(330)); //lift down
//   // pros::delay(10);
//   // translatePID(-10, -10); // move forward, put mogo onto platform
//   //
//
//
//
//
//
// }
//
//
// void skillsBrainstorm(){
//
//     //while(true){
//       rollers.moveVelocity(200);
//     //}
//
//
//     //four bar side facing forward
//     translatePID(100, 100);   //drive forward
//     fourBarLift.moveVelocity(PIDFourBar(800)); //four bar up (lift neutral side mogo)
//     translatePID(-20, -20);
//     rotate_PID(10);
//     translatePID(20, 20);  //pick up rings and put on mogo
//     rotate_PID(180);
//     translatePID(5,5); //put mogo on platform
//     fourBarLift.moveVelocity(PIDFourBar(200)); //four bar down
//
//     //itz lift facing forward
//     translatePID(75,75); //drive towards middle neutral mogo with itz lift
//     itz_lift.moveVelocity(itzPID(330)); //lift down
//     pros::delay(10);
//     pros::c::adi_digital_write(pneumaticLeftPort, LOW);
//     translatePID(-100, -100);
//     pros::c::adi_digital_write(pneumaticLeftPort, HIGH);
//     itz_lift.moveVelocity(itzPID(50)); //lift up
//     rotate_PID(180);
//
//     translatePID(20,20);
//     fourBarLift.moveVelocity(PIDFourBar(800)); //four bar up (lift neutral side mogo)
//
//     translatePID(100, 100);   //drive back toward platform
//
//     //see where the bot ends up and fix the position
//
//
// }
