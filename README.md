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

This program uses a rule-based algorithm that operates on the basic data gathered by the sensors. 
Then the distance observed is compared to the pre-defined threshold of 15cm (wall_distance 15)
and proceeds to take action depending on the given case.

The order of priority is:
1. Move forward if no obstacle is detected.
2. Move right if the front is unavailable.
3. If both options are not viable then, turn left.

The program continuously keeps looping and constantly makes real-time decisions.

Future advancements that can be made to this project are:

1. Implementing path planning in this current project using A* and Dijkstra's algorithms to plan a path to the goal while avoiding obstacles.
2. Adding onto this current project by incorporating an error-handling, recovery-based behaviour i.e. making the robot capable of backing in reverse when the primary three directions are not applicable.
