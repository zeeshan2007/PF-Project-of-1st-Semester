# PF-Project-of-1st-Semester
Rock-Paper-Scissors Game in C++

Introduction:
This program is a simple Rock-Paper-Scissors game written in C++. It allows the user to play against the computer. The user chooses one of three options: Rock, Paper, or Scissors. The computer randomly chooses one as well. The program then decides who wins based on the classic rules: Rock beats Scissors, Scissors beats Paper, and Paper beats Rock. The game continues until the user decides to stop playing.

How the Program Works:
At the start, the program includes standard libraries like iostream for input/output, cstdlib for generating random numbers, and ctime to seed the random generator with the current time. This ensures that the computer’s choices are different each time the game runs.

The program uses three main variables:
•	user for the player’s choice,
•	comp for the computer’s choice, and
•	play to check if the user wants to continue the game.

The main part of the program is a while loop, which keeps running as long as the user wants to play. Inside the loop, the program displays the three options and asks the user to enter a number according to their choice. At the same time, the computer generates a random number between 1 and 3 to select its move.
Once both choices are made, the program shows what the computer picked and then decides the winner. If both choices are the same, it is a draw. If the user’s choice beats the computer’s choice, the program prints “You win!” Otherwise, it prints “You lose!” After each round, the user is asked whether they want to play again. If the user enters ‘y’ or ‘Y’, the loop repeats; otherwise, the game ends and “Game Over!” is displayed.

Conclusion:
This program demonstrates fundamental concepts of C++ programming, including loops, conditionals, random number generation, and handling user input. It is interactive and easy to understand, making it a good example for beginners. Each round of the game is unique because of the random computer choice, which adds excitement. The program could be improved further by adding features like score tracking or input validation, but even in its current form, it is a complete and functional Rock-Paper-Scissors game.

