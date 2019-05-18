# Game Of Life
*Easy Conway's Game Of Life in console.*

________________________________
It's my first published project. It was created during mathematical studies. It presents a classic Game Of Life, which works on random table of cells. At that time I did not care about the program's appearance or user options. The program was simply supposed to work (like the first programs).

### How does the program work?
First, it generates random `40x40` size matrix with numbers `0` and `1`, which is displayed in this way:
```
Iteration number 1
@@  @ @  @@ @@  @ @    @@@  @ @@  @@  @@
 @ @@     @ @@ @ @ @ @@@@  @@@@@@ @  @@@
    @@@    @   @@ @    @  @     @   @@ @
 @ @@@@ @ @  @@@ @ @ @ @@  @ @@@@  @@  @
 @    @@@@  @ @@  @  @     @@@@@@@   @@
   @ @@@ @@ @@ @@      @ @ @@  @@@ @@@
 @   @ @@      @@@@@ @@ @  @   @@    @ @
@@   @@ @ @ @  @@@@ @@ @   @ @  @@ @@ @
@@ @@@@@@ @@ @ @@@ @@@ @@  @@ @@@@ @@@
 @  @@   @ @@  @ @  @    @  @  @@@@
  @@  @@@ @  @   @   @ @ @@ @ @   @ @@
@  @ @@@     @@@ @ @  @@  @@@@@  @@  @
@ @     @    @  @           @@@@@ @@@  @
  @  @@   @@@  @@@ @@  @@ @ @  @ @@ @@@
@  @@@@ @ @   @  @@  @@ @@@@@@ @@ @   @
 @@@@ @@@ @ @@ @     @ @@  @ @@     @@ @
 @ @ @@@   @@@ @@ @@ @@@@ @@@@ @@@  @@ @
@@@@@  @ @ @@ @@@ @@ @@ @  @ @  @ @@@  @
@@@  @ @@    @@ @@ @ @@@ @@ @    @@@  @
 @ @@ @ @  @ @@@ @ @@ @@ @@@@  @@@@
```
Next operations are carried out in accordace with the Conway's rules:
- if **alive** (`@`) cell has 2-3 neighbours, it stay **alive**; otherwise it **dies**,
- if **dead** (` `) cell has 3 neighbours, it comes **alive**; else it stay **dead**.

Program calculate the next table, clear the old and displays the new one in 100 iterations.
The final table may look like this:
```
Iteration number 100
@@@@@                      @@
     @ @@@                      @
 @@    @ @               @@       @
 @@    @ @@             @  @
         @               @ @
                         @      @@@
                         @@@   @   @
                        @@@@@@ @@   @
                        @  @ @ @     @
 @                       @ @ @@   @  @
@ @                        @@     @  @
@ @   @@                          @@
 @    @@




                                  @
      @                          @ @
     @@@                        @   @
```
You can restart the program by clicking `y`+`Enter` and watch the same iterations or 'evacuate'. :)
___________________________
There is a lot to improve. I could add an option to choose dimensions and iterations (eg. until you get a static model), but now I deal with something else. :)
