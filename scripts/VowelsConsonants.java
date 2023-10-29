import java.util.Scanner;

public class VowelsConsonants {
    public static void main(String[] args) {
        System.out.println("Enter your String:");
        Scanner sc= new Scanner(System.in);
        String s = sc.nextLine();
        calculate(s);
    }
    static void calculate(String s){
        int count1=0, count2=0;
        for(int i=0; i< s.length()-1; i++){
            if(s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u'){
                count1++;
            }else{
                count2++;
            }
        }
        System.out.println("No. of Vowels:" + count1);
        System.out.println("No. of Consonants:" + count2);
    }
}
