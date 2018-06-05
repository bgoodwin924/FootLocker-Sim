//
// Created by might on 3/27/2018.
//

#ifndef PJ6_SHOE_H
#define PJ6_SHOE_H


#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;

//parent class
class Shoe{
    //variables
protected:
    string brand;
    string shoe_name;
    int size;
    string color;
    double price;
public:
    /**
     * Default Constructor
     * Requires: nothing
     * Modifies: all shoe variables
     * Effects: creates all variables with empty strings, and numbers =0
    */
    Shoe();

    /**
     * non-Default Constructor
     * Requires: nothing
     * Modifies: all varibales
     * Effects: sets varibales to inputs
    */
    Shoe(string brand, string shoename, int size, string color, double price);

    /**
     * Brand Setter
     * Requires: nothing
     * Modifies: Brand
     * Effects: sets Brand to input
    */
    void setBrand(string brand);

    /**
     * Shoe name Setter
     * Requires: nothing
     * Modifies: shoe Name
     * Effects: sets shoe name to input
    */
    void setShoeName(string name);

    /**
     * size Setter
     * Requires: nothing
     * Modifies: size
     * Effects: sets size to input
    */
    void setSize(int size);

    /**
     * Color Setter
     * Requires: nothing
     * Modifies: Color
     * Effects: sets color to input
    */
    void setColor(string color);

    /**
     * Price Setter
     * Requires: nothing
     * Modifies: Price
     * Effects: sets price to input
    */
    void setPrice(double price);

    /**
     * Brand Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns brand
    */
    string getBrand()const;

    /**
     * shoe name Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns shoe name
    */
    string getShoeName()const;

    /**
     * size Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns size
    */
    int getSize()const;

    /**
     * color Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns color
    */
    string getColor()const;

    /**
     * price Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns price
    */
    double getPrice()const;

    /**
     * calcperf abstract
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns performace of that shoe
    */
    virtual double calcPerf() const=0;


};

//child class
class BasketballShoe : public Shoe{
    //variables
protected:
    //these are out of 3
    int traction; //compenent will be used to determine if user will break someones ankles
    int impact;
    int court_feel;
    int durability;
public:
    /**
     * Default Constructor
     * Requires: nothing
     * Modifies: traction, impact, court_feel, durability
     * Effects: creates all variables and set to 0
    */
    BasketballShoe();

    /**
     * non-Default Constructor
     * Requires: nothing
     * Modifies: traction, impact, court_feel, durability
     * Effects: creates all variables and set to input
    */
    BasketballShoe(int trac, int imp, int court,int dura);

    /**
     *  Traction Setter
     * Requires: nothing
     * Modifies: traction
     * Effects: sets traction to input
    */
    void setTraction(int trac);

    /**
     *  impact Setter
     * Requires: nothing
     * Modifies:impact
     * Effects: sets impact to input
    */
    void setImpact(int imp);

    /**
     * courtfeel Setter
     * Requires: nothing
     * Modifies: courtfeel
     * Effects: sets courtfeel to input
    */
    void setCourtFeel(int court);

    /**
     * durability Setter
     * Requires: nothing
     * Modifies: durability
     * Effects: sets durability to input
    */
    void setDurability(int dura);

    /**
     * traction Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns traction
    */
    int getTraction()const;

    /**
     *  impact Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns impact
    */
    int getImpact()const;

    /**
     * courtfeel Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns courtfeel
    */
    int getCourtFeel()const;

    /**
     * durability Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns
    */
    int getDurability() const;

    /**
     * calcPerf override
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns performace of shoe
    */
    double calcPerf() const override;

};

//child class
class RunningShoe : public Shoe{
    //variables
protected:
    //these are out of 3
    int traction; //compenent will be used to determine if user will break someones ankles
    int cushioning;
    int comfort;
    int durability;
public:
    /**
     * Default Constructor
     * Requires: nothing
     * Modifies: traction, impact, court_feel, durability
     * Effects: creates all variables and set to 0
    */
    RunningShoe();

    /**
     * non-Default Constructor
     * Requires: nothing
     * Modifies: traction, cushioning, comfort, durability
     * Effects: creates all variables and set to input
    */
    RunningShoe(int trac, int cus, int com,int dura);

    /**
     *  Traction Setter
     * Requires: nothing
     * Modifies: traction
     * Effects: sets traction to input
    */
    void setTraction(int trac);

    /**
     *  cushioning Setter
     * Requires: nothing
     * Modifies:cushioning
     * Effects: sets impact to input
    */
    void setCushion(int cus);

    /**
     * comfort Setter
     * Requires: nothing
     * Modifies: comfort
     * Effects: sets comfort to input
    */
    void setComfort(int com);

    /**
     * durability Setter
     * Requires: nothing
     * Modifies: durability
     * Effects: sets durability to input
    */
    void setDurability(int dura);

    /**
     * traction Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns traction
    */
    int getTraction()const;

    /**
     *  cushion Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns cushion
    */
    int getCushion()const;

    /**
     * comfort Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns comfort
    */
    int getComfort()const;

    /**
     * durability Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns
    */
    int getDurability()const;

    /**
     * calcPerf override
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns performace of shoe
    */
    double calcPerf() const override;

};

#endif //PJ6_SHOE_H
