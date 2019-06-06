#include "ros/ros.h"
#include "std_msgs/String.h"
#include <test_msg/Test.h>

int main(int argc, char *argv[])
{
  ros::init(argc,argv,"talker");

  ros::NodeHandle nodehandel;
  /**
   * @brief chatter_pub
   * nodehandel.advertise<test_msg::Test>("chatter",1000);
   * nodehandel.advertise<message_type>(topic name, stepqueue);
   */
  ros::Publisher chatter_pub = nodehandel.advertise<test_msg::Test>("chatter",1000);

  ros::Rate loop_rate1(10);
  int count = 0;
  while(ros::ok())
  {
    std_msgs::String msg;
    std::stringstream ss;
    /**
      ss is the address of hello world;
      */
    ss << "hello world" << count;
    msg.data = ss.str();//ss.str() return a string
    std::cout << "msg.data is :" << msg.data << std::endl
              << "ss.str() is :" << ss.str() << std::endl;
    /**
     * @brief ROS_INFO
     * string.c_str return the first address of the string, compatible with C style
     * ROS_INFO is like the printf~
     */
    ROS_INFO("%s",msg.data.c_str());
    test_msg::Test mymsg;
    mymsg.name = ss.str();
    std::cout <<"mysmg.name is :" << mymsg.name << std::endl;;
    mymsg.vel = 1;
    mymsg.pose.position.x=1.;

    chatter_pub.publish(mymsg);
    ros::spinOnce();

    loop_rate1.sleep();
    ++count;
  }

  return 0;
}



//#include <deque>

//#include <memory>//http://c.biancheng.net/view/1478.html
//#include <iostream>


//using namespace std;
//int main(int argc, char *argv[])
//{
//  //*********unique_ptr*********//
////  int i = 1;
////  int w = 2;
////  std::unique_ptr<int> up1(new int(1));
////  std::cout << *up1 << std::endl;
////  std::unique_ptr<int> up2(new int(w));
////  std::cout << *up2 << std::endl;
//////  delete *up1;
////  std::cout << i << endl;;
////  up1.release();
////  std::cout << *up1 << std::endl;
//////  up1.reset();
//////  std::cout << *up1 << std::endl;;

//    std::deque<int> first;
//    std::deque<int> second;
//    std::deque<int> third;

//    first.assign (7,100);

//    for (int i = 0; i < 7; ++i) {
//      cout << first[i];
//    }

////    int * itertor;
////    for (itertor = first.begin(); itertor < first.end(); ++itertor) {
////      cout << *itertor << endl;

////    }


//    std::deque<int>::iterator it;
//    it=first.begin()+1;

//    second.assign (it,first.end()-1); // the 5 central values of first

//    int myints[] = {1776,7,4};
//    cout << myints + 3 << endl;
//    cout << myints << endl;

//    third.assign (myints,myints+3);   // assigning from array.
//    for (int i = 0; i < 3; ++i) {
//      cout << third[i] << endl;
//      cout << myints[i] << endl;
//    }

//    std::cout << "Size of first: " << int (first.size()) << '\n';
//    std::cout << "Size of second: " << int (second.size()) << '\n';
//    std::cout << "Size of third: " << int (third.size()) << '\n';

//  return 0;
//}

//**********unorder_map*///////////////
//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <functional>
//using namespace std;

//class Person{
//public:
//    string name;
//    int age;
//    Person(string n, int a){
//        name = n;
//        age = a;
//    }

//    bool operator==(const Person & p) const
//    {
//        return name == p.name && age == p.age;
//    }
//};

//struct hash_name{
//  size_t operator()(const Person & p) const{
//    return hash<string>()(p.name) ^ hash<int>()(p.age);
//      }
//};

//int main(int argc, char* argv[]){
//  unordered_map<Person, int, hash_name> ids; //不需要把哈希函数传入构造器
//  ids[Person("Mark", 17)] = 40561;
//    ids[Person("Andrew",16)] = 40562;
//    for ( auto ii = ids.begin() ; ii != ids.end() ; ii++ )
//        cout << ii->first.name
//        << " " << ii->first.age
//        << " : " << ii->second
//        << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;

//class A
//{
//public:
//    int get() const{return i;}
//    void set(int x){this->i=x;cout<<"this指针保存的内存地址为:"<<this<<endl;}
//private:
//    int i;
//};

//int main()
//{
//    A a;
//    a.set(9);
//    cout<<"对象a所在的内存地址为:"<<&a<<endl;
//    cout<<"对象a所保存的值为:"<<a.get()<<endl;
//    cout<<endl;
//    A b;
//    b.set(999);
//    cout<<"对象b所在的内存地址为:"<<&b<<endl;
//    cout<<"对象b所保存的值为:"<<b.get()<<endl;
//    return 0;
//}

