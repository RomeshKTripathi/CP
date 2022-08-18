import java.util.*;
// import java.
public class Lexico{
    public static String sortString(String temp){
        int[] arr = new int[temp.length()];
        for(int i=0;i<temp.length();i++){
            arr[i] = temp.charAt(i) - 'a';
        }
        Arrays.sort(arr);
        String res = "";
        for(int i=0;i<temp.length();i++){
            res += (char)(arr[i]+'a');
        }
        return res;
    }

    public static void main(String[] args){

        // String instr = "temperature";
        Scanner sc =new Scanner(System.in);
        String instr = sc.nextLine();
        String vstr = "";
        String cstr = "";

        for(int i=0;i<instr.length();i++){
            if(instr.charAt(i) == 'a' || instr.charAt(i) == 'e'  ||instr.charAt(i) == 'i'||instr.charAt(i) == 'o'||instr.charAt(i) == 'u'){
                vstr+=instr.charAt(i);
            }
            else if(instr.charAt(i) != ' '){
                cstr+=instr.charAt(i);
            }
        }

        String vvstr = sortString(vstr);
        String ccstr = sortString(cstr);
        int index=0;
        if(vvstr.length()>0){   
             for(int i = 0;i<instr.length();i++){
                if(vvstr.charAt(0) == instr.charAt(i)){
                    index = i;
                    break;
                }
            }


            String tmp  = "" + index;
            vvstr+= tmp;
        }else{
            vvstr = "NA-1";
        }
        
        if(ccstr.length()>0){   
             int n = ccstr.length()-1;
             for(int i = instr.length()-1;i>=0;i--){
                if(ccstr.charAt(n) == instr.charAt(i)){
                    index = i;
                    break;
                }
            }
            String tmp = index+"";
            ccstr+= tmp;
        }else{
            ccstr = "NA-1";
        }

        System.out.print(vvstr);
        System.out.println(ccstr);






    }
}