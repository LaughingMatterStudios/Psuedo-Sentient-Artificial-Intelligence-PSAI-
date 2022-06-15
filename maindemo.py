#I am building out this code on here, so I'll be leaving notes everywhere for the time being. This will be the main program that needs to boot on startup, unless you want to manually run it each time. In the case of the latter, just run this file and let the bot do it's thing. While I'm building out the code, I'll leave lines of notes of what I plan to do. So this file is absolutely incorrect syntax as of now.

#On start, the PSAI needs to express an emotion as it "wakes up."
#Robot surveys surroundings. If it has a sort of neck joint, set up code for that. A second code will be set up for those who will need to turn the entire body to look around. When initially installing code, instruction will be given to delete one of the two survey code lines. 45 degrees to the left, 90 degrees to the right, 45 degrees to the left. Or vice versa. Random integer rolled to determine which.

#Step 1: Sensory Setup
import Sensors.py

def main():
  
Action = random.randint(1,7)
Walk = random.randint(1,3)
Emotion = random.randint(1,11)
Turn = random.randint(1,2)
Dance = random.randint(1,15)
LookAround = random.randint(1,2)

#Random Integer needs to be rolled for "Action". 
Action = random.randint()

Start loop here (if we need to start a loop)

print(Action)
#I don't know if I'm doing this right. It's my first time writing Python lol
#random integer rolled for Walk action. If your robot has wheels, you'll be instructed to change "walk" to "Rol". That, Or we'll just copy the main file and instruct users which to use.

If Action == 1
               print(Walk)
               If Walk == 1
               move forward a random distance at a slow speed
               If Walk == 2
               move forward a random distance at a medium speed
               If Walk == 3
               move forward a random distance at a fast speed
               
If Action == 2
Emotion = random.randint()

If Action == 3
               print(Turn)
               If Turn == 1
               turn left random degree
               If Turn == 2
               turn right random degree

If Action == 4
Dance = random.randint()

#Walk and Turn are given two chances each to be used. This is intentionally to give the machine an exploraing appearance, furthering the illusion of a general AI
If Action == 5
               print(Walk)
               If Walk == 1
               move forward a random distance at a slow speed
               If Walk == 2
               move forward a random distance at a medium speed
               If Walk == 3
               move forward a random distance at a fast speed

If Action == 6
               print(Turn)
               If Turn == 1
               turn left random degree
               If Turn == 2
               turn right random degree

If Action == 7
LookAround = random.randint()
