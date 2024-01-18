import java.util.Scanner;

public class Baekjoon25304 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int totalPrice = sc.nextInt();

        int typeNum = sc.nextInt();
        int sum = 0;

        for(int i = 0; i < typeNum; i++){
            int itemPrice = sc.nextInt();
            int itemNum = sc.nextInt();

            sum += itemPrice * itemNum;
        }
        if(totalPrice == sum){
            System.out.println("Yes");
        } else{
            System.out.println("No");
        }

    }
}
