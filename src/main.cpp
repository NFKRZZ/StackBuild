/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Pendumunda                                       */
/*    Created:      Wed Jan 15 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
void Drive()
{
  //Copy drive from Drift
}
void Stack()
{
  //Literally just move the motor a bit to make the blocks vertical and have the claws open up
}
void Conveyor()
{
  //Controls to rotate the conveyor belt
}
void Turn()
{
// Copy Turn from drift
}
void Arm()
{
// Put code that lifts up the arm
}
int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(true)
  {
    Drive();
    Turn();
    Conveyor();
    Stack();
    Arm();
  }
  
}
