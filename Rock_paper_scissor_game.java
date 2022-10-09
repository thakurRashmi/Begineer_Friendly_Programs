import java.util.Random;
import java.util.Scanner;


public class Stone {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int bound;
        System.out.println(" enter for Rock=0;Paper=1;sec=2");
        int userInput = sc.nextInt();


        Random random = new Random();
        int computerInput = random.nextInt(bound = 2);
        if (userInput == computerInput) {
            System.out.println("draw");}
               else if (userInput == 0 && computerInput == 2 || userInput == 1 && computerInput == 0 || userInput == 1 && computerInput == 0|| userInput == 2 && computerInput == 1) {
                    System.out.println("YOU WIN!");
                }
                else {
                    System.out.println("COMPUTER WIN!");
                }
        System.out.println("computer choice:"+computerInput);
            }
        }

