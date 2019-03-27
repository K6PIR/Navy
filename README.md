# Navy

### Goal
##### The project : repoduce the naval battle game
##### Game where you can fight against an other terminal (an other player).

##### The first player will launch the game, the other will launch the game with de PID of the first one. 
##### To play you have to enter the position of a case you want to attack (example : A3) the programm will tell you if it's a wrong position or if you hit or miss.

##### Then the other player will play.
##### And so on...

##### Until you finish ! The player who won receive a message and the player who loosed too.


### Program compilation and launch:
  ```sh
        make
```
##### First Player
  ```sh
        ./navy (file with your map)
```
##### Scond Player
  ```sh
        ./navy (pid of the other player) (file with your positions)
```

***==== THE BONUS DIRECTORY ====***
I strongly recommand you to launch the game in the bonus direcotry where the game is made in NCURSES.
It works the same but it's very nice !!!

#### Project realised by:
- **Alexandre Sachs : [alexandre.sachs@epitech.eu](https://github.com/SachsA)**
- **Kellian Cipierre : [kellian.cipierre@epitech.eu](https://github.com/K6PIR)**
