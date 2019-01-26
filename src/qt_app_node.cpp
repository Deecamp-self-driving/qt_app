#include <qt_app_node.h>
#include "widget.h"
#include <QApplication>

#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <tf/transform_datatypes.h>
#include <boost/thread.hpp>

void spinThread(){
  ros::spin();
}

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;


int main(int argc, char *argv[])
{
    //something about ros
    ros::init(argc, argv, "qt_app_node");
    ros::NodeHandle n;
    boost::thread spin_thread = boost::thread(boost::bind(&spinThread));

    

  


    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
