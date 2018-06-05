//
// Created by might on 3/27/2018.
//

#include "Shoe.h"

//Parent
Shoe::Shoe(){
    brand="";
    shoe_name="";
    size=0;
    color="Green";
    price=0.0;
}

Shoe::Shoe(string bran, string shoename, int siz, string col, double cost){
    brand=bran;
    shoe_name=shoename;
    size=siz;
    color=col;
    price=cost;
}

void Shoe::setBrand(string bran){
    brand=bran;
}

void Shoe::setShoeName(string name){
    shoe_name=name;
}

void Shoe::setSize(int siz){
    size=siz;
}

void Shoe::setColor(string col){
    color=col;
}

void Shoe::setPrice(double cost){
    price=cost;
}

string Shoe::getBrand()const{
    return brand;
}

string Shoe::getShoeName()const{
    return shoe_name;
}

int Shoe::getSize()const{
    return size;
}

string Shoe::getColor()const{
    return color;
}

double Shoe::getPrice()const{
    return price;
}

BasketballShoe::BasketballShoe() {
    traction=0;
    impact=0;
    court_feel=0;
    durability=0;
}


BasketballShoe::BasketballShoe(int trac, int imp, int court,int dura){
    traction=trac;
    impact=imp;
    court_feel=court;
    durability=dura;
}

void BasketballShoe::setTraction(int trac){
    traction=trac;
}
void BasketballShoe::setImpact(int imp){
    impact=imp;
}
void BasketballShoe::setCourtFeel(int court){
    court_feel=court;
}
void BasketballShoe::setDurability(int dura){
    durability=dura;
}
int BasketballShoe::getTraction()const{
    return traction;
}
int BasketballShoe::getImpact()const{
    return impact;
}
int BasketballShoe::getCourtFeel()const{
    return court_feel;
}
int BasketballShoe::getDurability()const{
    return durability;
}

double BasketballShoe::calcPerf() const {
    double per=(traction+impact+court_feel+durability)/4;
    //cout<<"The per is"<<per<<endl;
    return (traction+impact+court_feel+durability)/4;
}

RunningShoe::RunningShoe() {
    traction=0;
    cushioning=0;
    comfort=0;
    durability=0;
}


RunningShoe::RunningShoe(int trac, int cus, int com,int dura){
    traction=trac;
    cushioning=cus;
    comfort=com;
    durability=dura;
}

void RunningShoe::setTraction(int trac){
    traction=trac;
}
void RunningShoe::setCushion(int cus){
    cushioning=cus;
}
void RunningShoe::setComfort(int com) {
    comfort=com;
}
void RunningShoe::setDurability(int dura){
    durability=dura;
}
int RunningShoe::getTraction()const{
    return traction;
}
int RunningShoe::getCushion()const{
    return cushioning;
}
int RunningShoe::getComfort()const {
    return comfort;
}
int RunningShoe::getDurability()const{
    return durability;
}

double RunningShoe::calcPerf() const {
    double per=(traction+cushioning+comfort+durability)/4;
    //cout<<"The per is"<<per<<endl;
    return (traction+cushioning+comfort+durability)/4;
}