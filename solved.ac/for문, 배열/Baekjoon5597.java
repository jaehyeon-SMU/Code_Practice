import java.util.Scanner;

public class Baekjoon5597 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        boolean[] flag = new boolean[31];

        for(int i = 1; i <= 28; i++){
            int num = sc.nextInt();
            flag[num] = true;
        }

        for (int i = 1; i < 31; i++) {
            if(!flag[i]){
                System.out.println(i);
            }
        }

    }
}
