import java.util.Scanner;
//class TestProgGit{
class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int x=sc.nextInt();
        int ans=0;
        int rem;
        while(x>0){
            rem=x%10;
            ans = (ans*10)+rem;
            x=x/10;
        }
        System.out.println(x+" reversed is "+ans);
    }
}