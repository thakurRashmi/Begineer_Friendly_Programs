 }
  return HEIGHT;
}
origin: stackoverflow.com
Java Polymorphic method
 public static void main(String[] args) {
  EntertainmentRobot jim = new EntertainmentRobot(0.6, "SONY", "QRIO", "To live with you, make life fun and make you happy", 7.3);
  HumanStudyRobot jeff = new HumanStudyRobot(1.5, "Kawada Industries", "HRP", "Study into human movement and perfrom a wide range of tasks", 58.0);
  //System.out.println(jim);
  //System.out.println(jeff); 
  //EntertainmentRobot jim = robot();
  Scanner input = new Scanner(System.in);
  startRobot(jim, input);
  startRobot(jeff, input);

}

public static void startRobot(Robot robot, Scanner input) {
  /*
   * POLYMORPHIC METHOD
   * Accept an object of type robot
   * Scanner object
   * Start the robot
   * Get robot to undertake a task 
   * stop the robot
   */
  robot.start();
  robot.doTask();
  robot.stop();`enter code here`

}

/**
 * Returns the width of the robot measured in pixels.
 *
 * @return the width of the robot measured in pixels.
 * @see #getHeight()
 */
public double getWidth() {
  if (peer == null) {
    uninitializedException();
  }
  return WIDTH;
}
/**
 * Returns the height of the current battlefield measured in pixels.
 *
 * @return the height of the current battlefield measured in pixels.
 */
public double getBattleFieldHeight() {
  if (peer != null) {
    return peer.getBattleFieldHeight();
  }
  uninitializedException();
  return 0; // never called
}
