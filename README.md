To get the PWM model to work download and then unzip the Wheel showcase zip file
Once downloaded open the project in C2000 Code Composer it's the TI IED for their microcontroller boards 
- Once imported into code composer you must clean the project build the project and then debug to the correct CPU either 1 or 2
- To load the project or other projects and libraries into the project you must build targets for each smaller project and target them against the main project you are working on this will let you integrate different functions of the TI boards and get multiple functionalities from the same project build
- The model shows 6 PWM pins sending a signal at 10kHZ, this is meant so that the board can send the signal to a gate driver to turn on and off a Mosfet
- Case Statment:
//Case(000)
  A-HI:LOW
  C-LO:HIGH
  B-HI:LOW
  B-LO:HI
  C-HI:LOW
  A-LO:HIGH
//Case(100)
  A-HI:HIGH
  C-LO:HIGH
  B-HI:LOW
  B-LO:HIGH
  C-HI:LOW
  A-LO:LOW
//Case(110)
  A-HI:HIGH
  C-LO:HIGH
  B-HI:HIGH
  B-LO:LOW
  C-HI:LOW
  A-LO:LOW
//Case(010)
  A-HI:LOW
  C-LO:HIGH
  B-HI:HIGH
  B-LO:LOW
  C-HI:LOW
  A-LO:HIGH
//Case(011)
  A-HI:LOW
  C-LO:LOW
  B-HI:HIGH
  B-LO:LOW
  C-HI:HIGH
  A-LO:HIGH
//Case(001)
  A-HI:LOW
  C-LO:LOW
  B-HI:LOW
  B-LO:HIGH
  C-HI:HIGH
  A-LO:HIGH
//Case(101)
  A-HI:HIGH
  C-LO:LOW
  B-HI:LOW
  B-LO:HIGH
  C-HI:HIGH
  A-LO:LOW
//Case(111)
  A-HI:HIGH
  C-LO:LOW
  B-HI:HIGH
  B-LO:LOW
  C-HI:HIGH
  A-LO:LOW
