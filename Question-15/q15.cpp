#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 
class Box{
    int l,b,h;
    public:
    // Constructors: 
    // Box();
        Box(){
            l=b=h=0;
        }

// Box(int,int,int);
        Box(int l,int b,int h){
            l=l;b=b;h=h;
        }
// Box(Box);
        Box(Box &tempBox){
            tempBox.l=l;
            tempBox.b=b;
            tempBox.h=h;
        }
        // int getLength(); // Return box's length
        // int getBreadth (); // Return box's breadth
        // int getHeight ();  //Return box's height
        int getLenght(){
            return l;
        }
        
        int getBreadth(){
            return b;
        }
        
        int getHeight(){
            return h;
        }
        
        // long long CalculateVolume(); // Return the volume of the box
        
        long long int CalculateVolume(){
            return l*b*h;
        }
        
        //Overload operator < as specified
        bool operator < (Box &temp){
            if(l<temp.l){
                return 1;
            } 
            if(b<temp.b && l==temp.l){
                 return 1;   
            }
            if(h<temp.h && b==temp.b && l==temp.l){
                return 1;
            }
            return 0;
        }
        friend ostream &operator << (ostream &output,Box &temp);
        
};

ostream &operator << (ostream &output,Box &temp){
    output<<temp.l<<" "<<temp.b<<" "<<temp.h<<endl;
    return output;
}





//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}