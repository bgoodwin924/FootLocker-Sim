#include <iostream>
#include <bits/unique_ptr.h>
#include "Shoe.h"

int main() {
    char ans;
    double size;
    vector<unique_ptr<Shoe>> myShoes;
    //I have multiple cout statements so i can keep track
    cout<<"Welcome to Catamount Locker, the best dealer in shoes!"<<endl;
    cout<<"I see you are making a shoe collection. We have plenty of Basketball Shoes and Running Shoes!"<<endl;
    cout << "What size shoe do you wear?" << endl;
    cin.clear();
    cin >> size;
    while (cin.fail()) {
        cout << "That is not a number, try again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> size;
    }
    cout<<"Lets go down the list and tell me if you want the shoe or not."<<endl;
    cout<<"First up we have the Basketball Shoes!"<<endl;

    //shoe one
    cout <<"========================================================================="<<endl;
    cout <<"(1) Nike: Kobe A.D  $150"<<endl;
    cout <<"Summary: The Mamba Mentality requires the ability to find equilibrium between passion, fearlessness, optimism, and honesty, as well as the ability to detach oneself from the world. It doesn't come to players naturally. Through exceptional performance, the latest Kobe A.D. is designed to help you push past your limits so you can channel these emotions and carry on Kobe's legacy."<<endl;
    cout <<"Do you want this shoe? (Y/N)"<<endl;
    cin.clear();
    cin >> ans;
    ans=toupper(ans);
    while (ans != 'Y' && ans != 'N') {
        cout << "Sorry, what was that? " << endl;
        cout << "Please enter [Y/N]: ";
        cin >> ans;
        ans = toupper(ans);
    }
    if (ans == 'Y'){
        BasketballShoe a(3,2,2,2);
        a.setBrand("Nike"); a.setColor("Green"); a.setPrice(150); a.setShoeName("Kobe A.D"); a.setSize(size);
        myShoes.push_back(make_unique<BasketballShoe>(a));
    }
    cout<<"Next up we have....."<<endl;
    cout <<"========================================================================="<<endl;
    cout <<"(2) Nike: Kyrie 4  $120"<<endl;
    cout <<"Summary: The Kyrie 4 Men's Basketball Shoe is ultra-flexible, responsive and supportive. It's designed for Kyrie Irving's sudden changes of direction and smooth yet rapid playing style."<<endl;
    cout <<"Do you want this shoe? (Y/N)"<<endl;
    cin.clear();
    cin >> ans;
    ans=toupper(ans);
    while (ans != 'Y' && ans != 'N') {
        cout << "Sorry, what was that? " << endl;
        cout << "Please enter [Y/N]: ";
        cin >> ans;
        ans = toupper(ans);
    }
    if (ans == 'Y'){
        BasketballShoe b(3,1,3,2);
        b.setBrand("Nike"); b.setColor("Green"); b.setPrice(120); b.setShoeName("Kyrie 4"); b.setSize(size);
        myShoes.push_back(make_unique<BasketballShoe>(b));
    }
    cout<<"Next up we have....."<<endl;
    cout <<"========================================================================="<<endl;
    cout <<"(3) Nike: KD10 $150"<<endl;
    cout <<"Summary: Always ready to play, always ready to compete, Kevin Durant's tenth shoe is as versatile and responsive as KD. Zoned Flyknit provides breathability and stretch, while Nike Zoom Air cushioning returns impact energy back to your foot for ultra-responsiveness"<<endl;
    cout <<"Do you want this shoe? (Y/N)"<<endl;
    cin.clear();
    cin >> ans;
    ans=toupper(ans);
    while (ans != 'Y' && ans != 'N') {
        cout << "Sorry, what was that? " << endl;
        cout << "Please enter [Y/N]: ";
        cin >> ans;
        ans = toupper(ans);
    }
    if (ans == 'Y'){
        BasketballShoe c(3,3,2,3);
        c.setBrand("Nike"); c.setColor("Green"); c.setPrice(120); c.setShoeName("KD10"); c.setSize(size);
        myShoes.push_back(make_unique<BasketballShoe>(c));
    }
    cout<<"Now lets move onto running shoes, just in case you need to run from the fans!"<<endl;
    cout <<"========================================================================="<<endl;
    cout<<"(1) Nike: Air Max Plus $150"<<endl;
    cout<<"Summary: The in-your-face style of the men’s Nike Air Max Plus is as mesmerizing now as it was when the experimental design debuted in 1998 and changed the game forever. With the same fierce details, like the injected ribs that wrap the upper, but revamped technology, today's version of the shoe is exactly what you’re looking for."<<endl;
    cout<<"Do you want these shoes? (Y/N)"<<endl;
    cin.clear();
    cin >> ans;
    ans=toupper(ans);
    while (ans != 'Y' && ans != 'N') {
        cout << "Sorry, what was that? " << endl;
        cout << "Please enter [Y/N]: ";
        cin >> ans;
        ans = toupper(ans);
    }
    if (ans == 'Y'){
        RunningShoe d(3,2,3,3);
        d.setBrand("Nike"); d.setColor("Green"); d.setPrice(150); d.setShoeName("Air Max Plus"); d.setSize(size);
        myShoes.push_back(make_unique<RunningShoe>(d));
    }
    cout<<"Next up we have....."<<endl;
    cout <<"========================================================================="<<endl;
    cout<<"(2) Adidas: Originals MND R1 $130"<<endl;
    cout<<"Summary: Street style meets technical performance in the adidas Originals NMD Runner."<<endl;
    cout<<"Do you want these shoes? (Y/N)"<<endl;
    cin.clear();
    cin >> ans;
    ans=toupper(ans);
    while (ans != 'Y' && ans != 'N') {
        cout << "Sorry, what was that? " << endl;
        cout << "Please enter [Y/N]: ";
        cin >> ans;
        ans = toupper(ans);
    }
    if (ans == 'Y'){
        RunningShoe e(2,3,3,3);
        e.setBrand("Adidas"); e.setColor("Green"); e.setPrice(130); e.setShoeName("Originals NMD R1"); e.setSize(size);
        myShoes.push_back(make_unique<RunningShoe>(e));
    }
    cout<<"Next up we have....."<<endl;
    cout<<"(3) Adidas: Originals Prophere $120"<<endl;
    cout<<"Summary: The adidas Originals Prophere launches the next era of streetwear with an unexpected look fueled by a strong adidas identity. Enhanced by raw edge details and embroidery, they feature a knit upper with small pops of color to create a melange effect."<<endl;
    cout<<"Do you want these shoes? (Y/N)"<<endl;
    cin.clear();
    cin >> ans;
    ans=toupper(ans);
    while (ans != 'Y' && ans != 'N') {
        cout << "Sorry, what was that? " << endl;
        cout << "Please enter [Y/N]: ";
        cin >> ans;
        ans = toupper(ans);
    }
    if (ans == 'Y'){
        RunningShoe f(2,2,2,3);
        f.setBrand("Adidas"); f.setColor("Green"); f.setPrice(120); f.setShoeName("Originals Prophere"); f.setSize(size);
        myShoes.push_back(make_unique<RunningShoe>(f));
    }
    cout <<"========================================================================="<<endl;
    cout<<"Cool, now lets check out, and see the total cost and average performance of all the shoes you got."<<endl;

    int total=0;
    for(int i=0;i<myShoes.size();i++){
        total+=myShoes[i]->getPrice();
    }

    if(total==0){
        cout<<"You didn't buy anything, get out my store!"<<endl;
        exit(0);
    } else{
        cout<<"The total price is: $"<<total<<endl;
    }

    cout<<"Now lets calculate the overall performance of all your shoes"<<endl;
    double avgtot;
    double total2;
    for(int j=0;j<myShoes.size();j++){
        total2+=myShoes[j]->calcPerf();
    }
    avgtot=(total2/myShoes.size());
    cout<<"Out of 3, the average performace of your shoes is: "<<avgtot<<endl;
    cout<<"Thank you for shopping at Catamount Locker"<<endl;

    //BasketballShoe b(3,3,3,2);
    //b.setBrand("Nike");
    //BasketballShoe c(3,3,3,3);
    //c.setBrand("Adidas");
    //cout<<b.calcPerf()<<endl;
    //cout<<c.calcPerf()<<endl;
    //cout<<myShoes[0]->calcPerf()<<endl;
    return 0;
}