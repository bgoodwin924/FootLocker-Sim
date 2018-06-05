//
// Created by might on 3/28/2018.
//

#include <iostream>
#include <bits/unique_ptr.h>
#include "Shoe.h"

int main(){
    //Creates new basketball shoe
    BasketballShoe a(3,3,3,3);
    a.setBrand("a");
    a.setShoeName("b");
    a.setSize(12);
    a.setColor("Green");
    a.setPrice(120);
    a.setDurability(1);
    a.setTraction(1);
    a.setImpact(1);
    a.setCourtFeel(1);
    cout<<a.getBrand()<<a.getShoeName()<<a.getSize()<<a.getColor()<<a.getPrice()<<a.getDurability()<<a.getTraction()<<a.getImpact()<<a.getCourtFeel()<<a.calcPerf()<<endl;
    //should print ab12Green12011111

    //creates a new running shoe
    RunningShoe b(3,3,3,3);
    b.setBrand("x");
    b.setShoeName("y");
    b.setSize(12);
    b.setColor("Red");
    b.setPrice(150);
    b.setDurability(2);
    b.setTraction(2);
    b.setCushion(2);
    b.setComfort(2);
    cout<<b.getBrand()<<b.getShoeName()<<b.getSize()<<b.getColor()<<b.getPrice()<<b.getDurability()<<b.getTraction()<<b.getCushion()<<b.getComfort()<<b.calcPerf()<<endl;
    //should print xy12Red15022222
};