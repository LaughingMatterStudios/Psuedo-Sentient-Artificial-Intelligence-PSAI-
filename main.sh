I am building out this code on here, so I'll be leaving notes everywhere for the time being. This will be the main program that needs to boot on startup, unless you want to manually run it each time. In the case of the latter, just run this file and let the bot do it's thing. While I'm building out the code, I'll leave lines of notes of what I plan to do. So this file is absolutely incorrect syntax as of now.

On start, the PSAI needs to express an emotion as it "wakes up."
Robot surveys surroundings. If it has a sort of neck joint, set up code for that. A second code will be set up for those who will need to turn the entire body to look around. When initially installing code, instruction will be given to delete one of the two survey code lines. 45 degrees to the left, 90 degrees to the right, 45 degrees to the left. Or vice versa. Random integer rolled to determine which.

Random Integer needs to be rolled for "Action". 
Action = random.randint()

Action == 1
random integer rolled for Walk action. If your robot has wheels, you'll be instructed to change "walk" to "Rol". That, Or we'll just copy the main file and instruct users which to use.

If Action == 2
Emotion = random.randint()

If Action == 3
Turn = random.randint()

If Action == 4
Dance = random.randint()

If Action == 5
Walk = random.randint()

If Action == 6
Turn = random.randint()

If Action == 7
LookAround = random.randint()
