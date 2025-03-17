# RC-Maze-Solving-Car

Components Used:
1. Arduino (Mega 2560)
2. Motor Driver-L298N
3. Ultrasonic sensors- HC-SR04-(3 used)
4. DC Motors
5. Power Supply
6. USB cable
7. Wheels
8. RC Car Chassis

This program uses rule based algorithm that operates on the basic data gathered by the sensors. 
Then the distance taken observed is compared to the pre defined threshold of 15cm (wall_distance 15)
and proceeds to take action depending on the given case.

The order of priority is:
1. Move forward if no obstacle is detected.
2. Move right if the front is unavailable.
3. If both options are not viable then, turn left.

The program continuously loops, and constantly makes real-time decisions.
