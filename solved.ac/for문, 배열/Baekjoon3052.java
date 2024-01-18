import java.util.Scanner;

public class Baekjoon3052 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] input = new int[10];
        int count = 0;

        for(int i = 0; i < 10; i++){
            input[i] = sc.nextInt() % 42;
        }

        for(int i = 0; i <input.length; i++ ){
            int chance = 0;
            for(int j = i+1; j<input.length; j++) {
                if (input[i] == input[j]) {
                    chance += 1;
                }
            }
            if(chance == 0){
                    count += 1;
            }

        }

        System.out.println(count);
    }


}

