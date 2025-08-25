//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 11

#include <iostream>
using namespace std; 

class cuboid{
    public :
    int height;
    int width;
    int length;
    
    void Input(){
        cout<<"Enter height of cuboid :"<<endl;
        cin>>height;
        cout<<"Enter width of cuboid :"<<endl;
        cin>>width;
        cout<<"Enter length of cuboid :"<<endl;
        cin>>length;
    }
    
    int volume(){
        int v;
        v = height*width*length;
        return v;
    }
    
    void disp(){
        cout<<"Volume of cuboid :"<<volume();
    }
};

int main() {
    // Defining the object c1
    cuboid c1;
    //Calling Input Function
    c1.Input();
    // Calling display function 
    c1.disp();
    
    return 0;
}

/*Output

Enter height of cuboid :
4
Enter width of cuboid :
2
Enter length of cuboid :
8
Volume of cuboid :64
*/

