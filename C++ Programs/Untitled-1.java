import java.io.*;
import java.util.Scanner;

public class MyCode{

    public static void main(String[] args) throws java.lang.Exception {
	// write your code here
        Scanner s = new Scanner(System.in);
        String inputString = s.nextLine();
        int vowelAt = Integer.MAX_VALUE;
        int consonantAt = Integer.MAX_VALUE;
        String outstring = "";
        StringBuffer sb1 = new StringBuffer();
        StringBuffer sb2 = new StringBuffer();
        for (int i = 0; i < inputString.length(); i++){
            if(checkvowel(inputString.charAt(i))){
                vowelAt = Math.min(vowelAt, i+1);
                sb1.append(inputString.charAt(i));
            }else{
                consonantAt = Math.min(consonantAt, i+1);
                sb2.append(inputString.charAt(i));
            }
        }

        outstring = ((sb1.toString().equals("") ?"NA": sb1.toString()) + Integer.toString(vowelAt) + (sb2.toString().equals("") ?"NA": sb2.toString()) + Integer.toString(consonantAt));


        System.out.println(outstring);
    }

    public static boolean checkvowel(char a){
        if(Character.compare(a, 'a') == 0 || Character.compare(a, 'e') == 0 || Character.compare(a, 'i') == 0 || Character.compare(a, 'o') == 0 || Character.compare(a, 'u') == 0 ){
            return true;
        }
        return false;
    }
}