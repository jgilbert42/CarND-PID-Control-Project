The PID Controller algorithm has Proportional, Integral, and Derivative
components.  The Proportional component is proportional to the current error
and leads to overshooting and oscillation.  The Integral component is the sum
of all the errors and compensates for bias in the system.  The Derivative
component is the difference in the error from the previous time step and helps
to dampen the oscialltion.

My solution only sets the P and D.  The I did not feel necessary as the car
would continuously complete the track with P of 0.125 and D of 3 at 34-35 mph.
These parameters were selected manually.
