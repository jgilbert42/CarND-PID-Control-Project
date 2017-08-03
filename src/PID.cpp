#include "PID.h"

#include <stdio.h>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;

  this->p_error = 0;
  this->i_error = 0;
  this->d_error = 0;
}

void PID::UpdateError(double cte) {
  d_error = cte - p_error;
  p_error = cte;
  i_error += cte;

  //printf("p_error: %f, i_error: %f, d_error: %f\n", p_error, i_error, d_error);
}

double PID::TotalError() {
  return -Kp*p_error - Ki*i_error -Kd*d_error;
}

