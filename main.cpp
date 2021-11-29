#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 double
 bool
 char
 unsigned int
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int score = 5;
    int page = 2;
    int count = 4;

    float temperature = 3.2f;
    float time = 3.23f;
    float pressure = 5.34f;

    double air = 4.34343434;
    double speed = 0.5454545450;
    double length = 0.4343434343;

    bool on = true;
    bool off = false;
    bool click = true;

    char title = 'w';
    char host = 'j';
    char alpha = 'a';

    unsigned int boxes = 20;
    unsigned int dogs = 5;
    unsigned int cats = 2;
    
    ignoreUnused(score, page,count, temperature, time, pressure, air, speed, length, on, off, click, title, host, alpha, boxes, dogs,cats); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

 float carCost(float downPayment, float carPrice, int numCars)
 {
     ignoreUnused(downPayment, carPrice, numCars = 1);
     return {};
 }


 char passwordInput(char password, char username)
 {
     ignoreUnused(password, username);
     return {};
 }
 


 void moveArm(int direction, int distance)
 {
     ignoreUnused(direction, distance);
 }
 

 void moveLeg(int distance, int direction)
 {
     ignoreUnused(distance, direction);
 }
 

 bool powerToggle(bool switchOn, bool powerFlow)
 {
     ignoreUnused(switchOn, powerFlow);
     return {};
 }
 

 void driveCar(int direction, int speed= 55)
 {
     ignoreUnused(direction, speed);
 }
 

 float setThermostat(float temp, float setTemp)
 {
     ignoreUnused(temp, setTemp);
     return {};
 }
 

 float timeZoneIndic(bool amPm, int currentTime,  float location = 0.00f)
 {
     ignoreUnused(amPm, currentTime, location);
     return {}; 
 }
 

 void moveElevator(bool up, bool down, int floor)
 {
     ignoreUnused(up, down, floor);
 }
 

 bool launch(bool loaded, int time, float fuel)
 {
     ignoreUnused(loaded, time, fuel);
     return {};
 }
 

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    auto car = carCost(5000.f, 20000.f, 1);
    
    char pass = passwordInput('j', 'm');
    
    moveArm(-150, 80);
    
    moveLeg(48, 100);
    
    auto onOff = powerToggle(true, true);
    
    driveCar(22, 55);
    
    auto AC = setThermostat(72.3f, 71.0f);
    
    auto clock = timeZoneIndic(false, 1200);
    
    moveElevator(true, false, 8);
    
    bool takeOff = launch(true, 12, 8.9f);
    
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
