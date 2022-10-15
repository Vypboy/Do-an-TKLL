#ifndef NEWFUNCTION_H
#define	NEWFUNCTION_H

#define MAX 14
extern int present_floor; // the present floor that Elevator in
extern int floor[MAX];// information of 0/1 num all floor



    void setfloor(int x);   //set your destination 
    // set value of floor
    void Animation(int); //display up or down
    // check value of previous and the next value of floor
    int typefloor(int);  //check type of floor ,input is order of floor
    // give 0/1
       
    void priority(int[]); // input is all signal from floors
    //check floor[MAX] to give the priority order for Elevator
    
    int comparison(int);   // comparison with the near Elevator, input is
                            // value of near present_floor
    // comparison the present floor with the near present_floor
    int checkweight(float); //the average of 1 person is 60Kg then check the 
                             // quantity of people in Elevator
    // give 0/1 
    /////////////////////////////////////////////////////////////////////
    void warning();
    // depend on value of typefloor() and checkweight()...
    void trouble(); // check time between 2 floors and ...
    // use another timer to check time and give warning
    void controll_time(); // check if don't have anyone go in, elevator will go up/down
    // count time waiting -> warning and Elevator will go


#endif	/* NEWFUNCTION_H */
