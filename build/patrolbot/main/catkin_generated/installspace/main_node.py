#!/usr/bin/env python
import rospy
from std_msgs.msg import Int32
from std_msgs.msg import UInt32
from geometry_msgs.msg import PoseStamped
from ar_track_alvar_msgs.msg import AlvarMarkers
import os


pose_val=[(2.1, 2.2, 0.0), (0.0, 0.0, 0.0, 1.0)]

waypoints = [
	[(6.6037, 1.31722, 0), (0, 0, -0.37, 0.92)],
	[(4.1029, -1.27982, 0 ), (0, 0, 0.89, 0.45)],
	[(1.8694, 0.819811, 0) , (0, 0, 0.37, 0.92)],
	[(0.2223, -1.37145, 0) , (0, 0, 0.69, 0.72)]
]

def callback_ar(msg_ar):
	#if msg_ar.markers[0]:
	if len(msg_ar.markers) != 0:
		print msg_ar.markers[0].id
		if msg_ar.markers[0].id == 0:
			pose_val=waypoints[0]
		elif msg_ar.markers[0].id == 1:
			pose_val=waypoints[1]
		elif msg_ar.markers[0].id == 24:
			pose_val=waypoints[2]
		elif msg_ar.markers[0].id == 50:
			pose_val=waypoints[3]
		else:
			pose_val=[(2.1, 2.2, 0.0), (0.0, 0.0, 0.0, 1.0)]

#		os.system('ROS_NAMESPACE=usb_cam rosrun image_proc image_proc imraw:=image_raw _approximate_s=true 2_queue_size:=20')
#		os.system('roslaunch turtlebot3_automatic_parking_vision turtlebot3_automatic_parking_vision.launch')

		os.system('~/start_ap2.sh')

		print pose_val
		pose=goal_pose(pose_val)
		pub_ps.publish(pose)

#goal_pose
def goal_pose(self):
	goal_pose = PoseStamped()
	goal_pose.header.stamp = rospy.Time.now()
	goal_pose.header.frame_id = "map"
	goal_pose.pose.position.x = self[0][0]
	goal_pose.pose.position.y = self[0][1]
	goal_pose.pose.position.z = self[0][2]

	#quaternion = tf.transformations.quaternion_from_euler(0, 0, self.theta)
	goal_pose.pose.orientation.x = self[1][0]
	goal_pose.pose.orientation.y = self[1][1]
	goal_pose.pose.orientation.z = self[1][2]
	goal_pose.pose.orientation.w = self[1][3]

	return goal_pose

#subscribe
def ar_sub():
	sub_ar=rospy.Subscriber('/ar_pose_marker', AlvarMarkers, callback_ar)

#main_node
if __name__ == '__main__':
	rospy.init_node('main_node')

	pub_ps=rospy.Publisher('/move_base_simple/goal', PoseStamped, queue_size=10)

	ar_sub()

	rate=rospy.Rate(0.5)

	print('start!')

#	os.system('ROS_NAMESPACE=usb_cam rosrun image_proc image_proc imraw:=image_raw _approximate_s=true _queue_size:=20')
#	os.system('roslaunch turtlebot3_automatic_parking_vision turtlebot3_automatic_parking_vision.launch')

	os.system('~/start_ap2.sh')

	print('first parking')

	while not rospy.is_shutdown():
		rate.sleep()

