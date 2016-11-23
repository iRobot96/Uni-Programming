//
//  main.cpp
//  clas
//
//  Created by George Burton on 16/11/2016.
//  Copyright © 2016 George Burton. All rights reserved.
//

#include <iostream>
using namespace std;



class Animal
{
public:
    void SetNumLegs(int x){Numlegs = x;};
    int GetNumLegs(){return Numlegs;};
    void setHairColour (string x) {HairColour = x;};
    string GetHairColour(){return HairColour;};
    
    virtual void doANoise()
    {
        std::cout << "NOISE!!!!\n";
    }
    
protected: int Numlegs;
           string HairColour;

};



class Gorilla : public Animal
{
    Gorilla(){
        Numlegs = 2;
        HairColour = "Black";
    }
    
    void doANoise() override
    {
        std::cout << "OOOOOOOO!\n";
    }
    
};

        class George : public Animal
        {
        public: George(){
                Numlegs = 2;
                HairColour ="Unpleasant brown";
                
            }
         void doANoise() override
            {
                cout << "meh" <<endl;
                
            }

        };

         //is it working?


int main() {
    George g;
    g.GetNumLegs();
    g.doANoise();
    
    
    
    

    
    
    
    
}
