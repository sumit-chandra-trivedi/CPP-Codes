#include<iostream>
using namespace std;
template<typename T,typename V>
class Pair
{
  T x;
  V y;
  public:
  void setX(T x)
  {
      this->x=x;
  }
  T getX()
  {
     return x;
  }
  void setY(V y)
  {
      this->y=y;
  }
  V getY()
  {
    return y;
  }
};

int main()
{
  /*
    Pair<int,double> p1;
    p1.setX(100);
    p1.setY(100.526);
    cout<<p1.getX()<<" "<<p1.getY();
    */
   Pair<Pair<int,int>,int>p2;
   p2.setY(10);
   Pair<int,int>p4;
   p4.setX(15);
   p4.setY(16);
   p2.setX(p4);
   cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;
}
