#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
class Box {

    private:
        int l=0,b=0,h=0;
    public:

        Box()
        {
            l=0;
            b=0;
            h=0;
        }
        Box(int len,int bre, int hei)
        {
            l=len;
            b=bre;
            h=hei;
        }

        Box(Box &instance)
        {
            l=instance.l;
            b=instance.b;
            h=instance.h;
        }//burada hata var

        int getLength()
        {
        return l;
        }

        int getBreadth ()
        {
        return b;
        }

        int getHeight ()
        {
            return h;
        }
        long long CalculateVolume()
        {
            long long resultl=1;
            resultl=resultl*l*b*h;
            //resultl=resultl*b;
            //resultl=resultl*h;
            return resultl;
        }
        bool operator<(Box& box2)
        {
             bool result=false;
             if(this->l<box2.l)
             {
                 result= true;
             }else if (this->b<box2.b && this->l==box2.l)
             {
                 result= true;
             }else if (this->h<box2.h && this->b==box2.b&& this->l==box2.l)
             {
                 result= true;
             }
             return result;
         }
        friend ostream& operator<<(ostream& out, const Box& box2)
        {
          out<<box2.l<<" "<<box2.b<<" "<<box2.h<<" ";
          return out;
        }
         //gogogogogo

};

//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
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
